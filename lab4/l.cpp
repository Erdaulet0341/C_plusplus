#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n>> m;
    int a[n][m];
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;

    int r, c , sum =0;

    for (int j=0; j<m; j++){
        int min = 1e9;
        for(int i=0; i<n; i++){
            if(a[i][j]<min ){
                min = a[i][j];
                r = i+1;
                c= j +1;

            }
        }
        cout << r << ";" << c << endl; 
        sum = sum + min;

    }
    cout << "Their sum:" << endl << sum;
}