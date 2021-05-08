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
    while (T--)
    {
        int res = 0;
        cin >> n >> k;
        int A[k], B[k];
        bool mark[41] = {0};
        for (int i = 0; i < k; i++)
        {
            cin >> A[i];
            B[i] = A[i];
            mark[A[i]] = 1;
        }
        bool sw = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (A[i] != n + i - k + 1)
            {
                A[i]++;
                sw = 1;
                for (int j = i + 1; j < k; j++)
                {
                    A[j] = A[j - 1] + 1;
                }
                break;
            }
        }
        if (sw == 1)
        {
            for (int i = 0; i < k; i++)
            {
                if (mark[A[i]] == 0)
                    res++;
            }
            cout << res << endl;
        }
        else
        {
            cout << k << endl;
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