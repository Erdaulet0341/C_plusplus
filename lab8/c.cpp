#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int l, r;
    cin >> l >> r;

    reverse(a+l, a+r+1);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    

}