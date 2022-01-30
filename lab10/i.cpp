#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0, j=n-1; i<n, j>=0; i++, j--){
        if(a[i]==a[j]){
            cout << "OK" << endl;
        }
        else if((n-1)/2==i && n%2==1){
            cout << "OK" << endl;
        }
        else{
            cout << "Instead of " << a[i] << " here was " << a[j]  << endl;
        }
    }
}