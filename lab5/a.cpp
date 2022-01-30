#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int bas=0, ksh=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            bas++;

        }
        else{
            ksh++;
        }
    }
    cout << ksh << " " << bas; 
}