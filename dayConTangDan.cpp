#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

void solve() {
	int X[1001] = {0};
	int n;	cin >> n;
	int arr[n];
	int res = 0;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 0; i < n; i++)	{
		X[i] = 1;
		for(int j = 0; j < i; j++) {
			if(arr[i] > arr[j])	
				X[i] = max(X[i], X[j]+1);
		}
		res = max(X[i], res);
	}
	cout << res << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}