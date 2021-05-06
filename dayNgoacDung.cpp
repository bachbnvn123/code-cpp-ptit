#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#define ll long long
#define mod 1000000007

using namespace std;
ll T, n, m, k;

void solve()
{
    cin >> T;
    while(T--) {
        int res = 0;
        string str;
        cin >> str;
        stack<int> cr;
        cr.push(-1);    // Đánh dấu
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == '(') {
                cr.push(i);
            }
            else {
                cr.pop();
                if(cr.size() > 0)
                    res = max(res, i-cr.top());
                else    
                    cr.push(i);
            }
        }
        cout << res << endl;
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
