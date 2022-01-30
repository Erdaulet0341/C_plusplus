#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        for(int i=0; i<s.size(); i++){
            if(s.size()<3) continue;
            cout << s[i];
        }
        cout << " ";
    }
}