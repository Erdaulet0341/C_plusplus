#include <bits/stdc++.h>
using namespace std;

int f(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        int k = s[i]-48;
        sum+=k;
    }
    return sum;
}

int main(){
    string s;
    cin >> s;
    cout << f(s);
    
}