#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int z; cin >> z;
    if(z>=0){
        for(int i=n-z; i<n; i++){
            cout << a[i] << " ";
        }
        for(int i=0; i<n-z; i++){
            cout << a[i] << " ";
        }
    }
    else{
        for(int i=z*(-1); i<n; i++){
            cout << a[i] << " ";
        }
        for(int i=0; i<z*(-1); i++){
            cout << a[i] << " ";
        }
    }
}