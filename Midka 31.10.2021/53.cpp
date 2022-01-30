#include <bits/stdc++.h>
using namespace std;


int main(){
    string s, l;
    cin >> s >> l;
    char c;
    cin >> c;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<l.size(); j++){
            if(s[i]==l[j]){
                s[i]=c;
            }
        }
    }
    cout << s;
}