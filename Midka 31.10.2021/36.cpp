#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m; j++){
                int temp = a[i+1][j+1];
                if(a[i][j]>a[i+1][j+1]){
                    a[i+1][j+1]=a[i][j];
                    a[i][j]=temp;
                }
            }
             cout << endl;
        
        }
        else{
            for(int j=0; j<m; j++){
                int temp = a[i][j];
                if(a[i][j]<a[i+1][j+1]){
                    a[i+1][j+1]=a[i][j];
                    a[i][j]=temp;
                }
            }
             cout << endl;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
