#include <iostream>
using namespace std;

int main(){
    long long x;
    cin >> x;
    string s="";
    while(x!=0){
        int k = x%2;
        char c = char(k + 48);
        s=c+s; // 10
        x/=2;
    }
    int l = s.size();//5
    while(l!=8){
        s='0'+s; //00
        l++; //6 7
    }
    
    for(int i=0, j = s.size()-1;j>=0, i<s.size(); j--, i++){
        if(s[i]!=s[j]){
            cout << "Sad";
            return 0;
        }
    }
    cout << "It works!";
}