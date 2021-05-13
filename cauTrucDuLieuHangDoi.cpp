#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <vector>
#include <cmath>
#include <set>
#include <stack>
#include <queue>
#define ll long long
#define mod 1000000007
using namespace std;
ll T, n, m, s, k;
queue<int> carry;

void logic(int ans)
{
    if (ans == 1)
    {
        cout << carry.size();
    }
    else if (ans == 2)
    {
        if (carry.size() == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else if (ans == 3)
    {
        int x;
        cin >> x;
        carry.push(x);
    }
    else if (ans == 4)
    {
        if (carry.size() > 0)
            carry.pop();
    }
    else if (ans == 5)
    {
        if (carry.size() > 0)
            cout << carry.front();
        else
            cout << -1;
    }
    else if (ans == 6)
    {
        if (carry.size() > 0)
            cout << carry.back();
        else
            cout << -1;
    }
    cout << endl;
}

void solve()
{
    cin >> T;
    while (T--)
    {
        while (carry.size() > 0)
            carry.pop();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int ans;
            cin >> ans;
            logic(ans);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}