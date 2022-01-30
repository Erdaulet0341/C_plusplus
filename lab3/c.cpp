#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    int ps = -1e9;
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    for (int i= 0; i<n; i++){
        if (ar[i]>ps){
            ps = ar[i];
            
        }
    }
    cout << ps;
    return 0;
}