#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0, j=1; i<n, j<n; j++, i++){ //1 2 3 4     2
        if(a[i]>a[j]){
            k*=2;
        }
        else{
            k=k-1; 
        }
    }
    cout << k;
}