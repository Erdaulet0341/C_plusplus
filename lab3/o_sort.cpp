#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int k=-1e9;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
 
    sort(a, a+n);

    for (int i = n-1; i>0; i--){
        cout << a[i] << " " ;
    }

    return 0 ;
}