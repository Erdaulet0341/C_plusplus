#include <bits/stdc++.h>
using namespace std;

int main(){
    string  s;
    cin >> s;
    stack<char> st;
    for(int i=0; i<s.size(); i++){ //1011
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            if(st.top()=='1' && s[i]=='1'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    string s1="";
    while(!st.empty()){
        s1= st.top()+s1;
        st.pop();
    }
    cout << s1;
}