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
ll arr[1001][1001];

void solve()
{
    for(int i = 0; i < 1001; i++)
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i)    arr[i][j] = 1;
            else                    arr[i][j] = (arr[i-1][j-1] + arr[i-1][j])%mod;       
            // Link chứng minh công thức : https://bitly.com.vn/bfcv3t
        }
    cin >> T;
    while(T--) {
        cin >> n >> k;
        cout << arr[n][k] << endl;
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
