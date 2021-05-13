#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <set>
using namespace std;
#define ll long long
#define N 100000
#define mod 1000000007

int T, n, m, k;

void solve()
{
    string s;
    stack<int> hold;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> n;
            hold.push(n);
        }
        else if (s == "pop")
            hold.pop();
        else if (s == "show")
        {
            vector<int> v;
            if (hold.empty() == 1)
            {
                cout << "empty" << endl;
                continue;
            }
            while (hold.size() > 0)
            {
                v.push_back(hold.top());
                hold.pop();
            }
            reverse(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
                hold.push(v[i]);
            }
            cout << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}