#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    int ps = 0;
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    for (int i= 0; i<n; i++){
        if (ar[i]>0){
            ps++;
            
        }
    }
    cout << ps;
    return 0;
}