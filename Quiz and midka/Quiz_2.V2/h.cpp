#include <iostream>
using namespace std;

int main(){
    string s;
    char k;
    cin >> k >> s;
    for (int i=0; i<s.size(); i++){
        if(s[i]!=k){
            cout << s[i];
        }
    }
}