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
vector<string> res[15];

void logic(int start, int n, int arr[])
{
    for (int i = 8; i >= 6; i -= 2)
    {
        arr[start] = i;
        if (start == n - 1)
        {
            string ans = "";
            for (int i = 0; i < n; i++)
            {
                ans += to_string(arr[i]);
            }
            res[n].push_back(ans);
        }
        else
        {
            logic(start + 1, n, arr);
        }
    }
}

void solve()
{
    cin >> T;
    for (int i = 14; i >= 1; i--)
    {
        int arr[i + 1];
        logic(0, i, arr);
    }
    while (T--)
    {
        int ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            ans += res[i].size();
        }
        cout << ans << endl;
        for (int i = n; i >= 1; i--)
        {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
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