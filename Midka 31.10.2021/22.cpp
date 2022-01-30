#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    string digits = "";
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            digits+=s[i];
        }
    }
    
    for(int i=digits.size()-1; i>=0; i--){
        cout << digits[i];
    }
}