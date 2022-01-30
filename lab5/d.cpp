#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string l ="";
    for(int i=0, j=s.size()-1; j>=0, i<s.size(); j--, i++){
        if(s[i]==s[j]){
            l = l + s[i];
        }
        else {
            break;
        }
    }
    if (l==s){
        cout << "YES"; 
    }
    else {
        cout << "NO";
    }
}