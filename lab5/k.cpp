#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int v=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='o' || s[i] == 'u' || s[i] == 'e' || s[i] == 'i'){
            v++;
        }
    }
    cout << v;
}