#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <vector>
#include <set>
#define ll long long
using namespace std;
ll T, n, m, k;
bool mark[1000001];

bool logic(pair<int, int> x, pair<int, int> y)
{
    if(x.second > y.second)
        return true;
    else if(x.second == y.second && x.first < y.first)
        return true;
    else 
        return false;
}


void solve()
{
    cin >> T;
    while(T--) {
        cin >> n;
        memset(mark, 0, sizeof(mark));

        // Xử lý số lần xuất hiện của từng số
        map<int, int> num;
        for(int i = 0; i < n; i++) {
            int ans;    cin >> ans;
            if(mark[ans] == 0)  num[ans] = 1;
            else                num[ans]++;
            mark[ans] = 1;
        }

        // Sắp xếp theo số lần xuất hiện và điều kiện đi kèm
        vector< pair<int, int> > res;
        for(map<int,int>::iterator i = num.begin(); i != num.end(); i++)
            res.push_back(make_pair(i->first, i->second));

        sort(res.begin(), res.end(), logic);

        for(int i = 0; i < res.size(); i++) {
            for(int j = res[i].second; j > 0; j--) 
                cout << res[i].first << " ";
            
        }   
        cout << endl;
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
