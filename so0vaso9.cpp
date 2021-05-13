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
ll T, n, m, s, k;

void logic()
{
    queue<string> ans;
    ans.push("9");
    while (ans.size() > 0)
    {
        string first = ans.front();
        ans.pop();
        ll surplus = 0;
        for (int i = 0; i < first.size(); i++)
        {
            surplus = (10 * surplus + (first[i] - '0')) % n;
        }
        if (surplus == 0)
        {
            cout << first << endl;
            break;
        }
        ans.push(first + "0");
        ans.push(first + "9");
    }
}

void solve()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        logic();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}