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

void solve()
{
    int mark[1000] = {0};
    mark['('] = 0;
    mark['+'] = mark['-'] = 1;
    mark['*'] = mark['/'] = mark['%'] = 2;
    mark['^'] = 3;

    cin >> T;
    while (T--)
    {
        string str, res = "";
        cin >> str;
        stack<char> carry;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                carry.push('(');
            }
            else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
                res += str[i];
            }
            else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '^')
            {
                while (carry.size() > 0 && mark[str[i]] <= mark[carry.top()])
                {
                    res += carry.top();
                    carry.pop();
                }
                carry.push(str[i]);
                // Sau khi kiểm tra độ ưu tiên và in ra các toán tử thì thêm toán tử tại vị trí đang xét vào ngăn xếp
            }
            else if (str[i] == ')')
            {
                while (carry.size() > 0 && carry.top() != '(')
                {
                    res += carry.top();
                    carry.pop();
                }
                carry.pop(); // Xoá '('
            }
        }
        while (carry.size() > 0)
        {
            if (carry.top() != '(')
                res += carry.top();
            carry.pop();
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