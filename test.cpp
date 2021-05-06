#include <iostream>
#include <cstring>
#include <algorithm>
#define M 1000000007;
using namespace std;
long long d[1001][1001];

int main(){
    for(int i=0; i<=1000; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i) d[i][j]=1;
            else d[i][j] = d[i-1][j-1] + d[i-1][j];
            d[i][j]%=M;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << d[n][k] <<endl;
    }
    return 0;
}