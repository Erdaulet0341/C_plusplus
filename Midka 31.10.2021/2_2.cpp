#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int n1=(a & (1<<n));
    int n2=(b & (1<<n));
    a -= n1, a+=n2;
    b -= n2, b+=n1;
    if(a > b){
        cout << "Good deal for the first number";
    }
    else if(a == b ){
        cout << "Nothing has changed";
    }
    else{
        cout << "Good deal for the second number";
    }
}