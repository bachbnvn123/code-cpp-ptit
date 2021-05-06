#include <iostream>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int re = 0;
        stack<int> st;
        st.push(-1);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(st.size()>0)
                    re = max(re, i-st.top());
                if(st.size()==0) st.push(i);
            }
        }
        cout << re << endl;
    }
    return 0;
}