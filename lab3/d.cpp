#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    int ps = 0, max= -1e9;
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    
    for (int i=0 ; i<n; i++){
        if (ar[i]>max){
            max = ar[i];
            ps = i+1;
            
        }
    }
    cout << ps;
    return 0;
}