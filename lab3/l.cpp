#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m]; 
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int i = 0;
    int j = 0;

    while (i < n && j < m){
        if (a[i] < b[j]){
            cout << a[i] << " ";
            ++i;
        }
        else {
            cout << b[j] << " ";
            ++j;
        }
    }
    if (i < n){
       for (int c = i; c < n; c++){
           cout << a[c] << " ";
       }
    }
    else {
          for (int c = j; c < m; c++){
           cout << b[c] << " ";
       }  
    }

}