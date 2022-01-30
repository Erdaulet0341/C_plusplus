#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << 0 << " ";
        }
        for(int j=0; j<n; j++){
            if(i==j){
                cout << 1 << " ";
            }
        }
         for(int j=0; j<i; j++){
            cout << 2 << " ";
        }
        cout << endl;
    }
}