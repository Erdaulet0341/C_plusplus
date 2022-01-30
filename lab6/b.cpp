#include <iostream>
#include <cmath>

using namespace std;

int modul(int x, int y ){

}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int b[n]; 
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int d[n];
    for(int i=0; i<n; i++){
        d[i] = abs(a[i]-b[i]);
    }

    for(int i=0; i<n; i++){
        cout << d[i] << " ";
    }

}