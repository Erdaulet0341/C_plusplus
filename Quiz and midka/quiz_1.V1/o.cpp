#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string k="";
    for(int i=0, j= s.size() - 1;j >=0, i<s.size(); j--, i++){
        if(s[i]==s[j]){
            k = k + s[i];
        }

    }  
    if(s==k) cout << "YES";
    else cout << "NO";
}