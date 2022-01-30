#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            cout << ".";
        }
        for(int j=1; j<=1; j++){
            cout << i+1;
        }
        for (int j =0; j<i; j++){
            cout << ".";
        }
        cout << endl;
    }
}