#include <iostream>
using namespace std;

int main(){
    int n=4;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int max = -1e9;

    for (int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    cout << max;

    
}