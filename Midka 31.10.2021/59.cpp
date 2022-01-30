#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin  >> a[i];
    }
    int b[n];
    for(int i=0; i<n; i++){
        b[i]=a[i];
    } 
    sort(a, a+n);
    for(int i=0; i<n; i++){
        if(b[i]!=a[i]){
            cout << "Not sorted";
            return 0;
        }
    }
    cout << "Sorted";

}
