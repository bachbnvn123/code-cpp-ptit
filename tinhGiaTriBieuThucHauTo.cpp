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

void solve()
{
    ll mark[1000] = {0};
    mark['+'] = mark['-'] = mark['*'] = mark['/'] = mark['%'] = mark['^'] = 1;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        stack<int> numbers;
        for (int i = 0; i < str.size(); i++)
        {
            if (mark[str[i]] == 1)
            {

                int st_1 = numbers.top();
                numbers.pop();
                int nd_2 = numbers.top();
                numbers.pop();

                if (str[i] == '+')
                {
                    numbers.push(st_1 + nd_2);
                }
                else if (str[i] == '-')
                {
                    numbers.push(nd_2 - st_1);
                }
                else if (str[i] == '*')
                {
                    numbers.push(st_1 * nd_2);
                }
                else if (str[i] == '/')
                {
                    numbers.push(nd_2 / st_1);
                }
                else if (str[i] == '%')
                {
                    numbers.push(nd_2 % st_1);
                }
                else if (str[i] == '^')
                {
                    numbers.push(pow(nd_2, st_1));
                }
            }
            else
                numbers.push(str[i] - '0');
        }
        cout << numbers.top() << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}