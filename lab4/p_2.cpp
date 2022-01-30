#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++)  {
          cin >> a[i][j];
      }
    }
    int  sum = 0;
    int x=n-1;
    for(int i=0, j=n-1; i<n, j>=0 ; j--, i++){
        if(i+j==x){
         sum = sum + a[i][j];   
        }
    }
    cout << sum;
}