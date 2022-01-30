#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s="";
    while(n!=0){
        int k=n%16;
        if(k>=10){
            char c = k + 55;
            s = c +s;
        }
        else{
            char d = k+48;
            s=d+s;
        }
        
        n/=16;
    }
    cout << s;
}
