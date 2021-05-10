#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define mod 1000000007
#define ll long long
#define x 100000
int T, n, k;

void logic(string str, int n, int start)
{
    if (start == n - 1 && str[start] == 'A')
    {
        cout << str << endl;
        return;
    }
    if (start == n - 1 && str[start] == 'H')
    {
        return;
    }
    if (str[start] == 'H')
        logic(str += "A", n, start + 1);
    else
    {
        logic(str + "A", n, start + 1);
        logic(str + "H", n, start + 1);
    }
}

void solve()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        string str = "H";
        logic(str, n, 0);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}