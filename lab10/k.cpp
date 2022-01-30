#include <iostream>
#include <cmath>
using namespace std;

bool prime(int x){
    for(int i=2; i<x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >>a[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        int k=abs(a[i]);
        if(prime(k)==true && k>1){
            cnt++;
        }
    }
    cout << cnt;
}