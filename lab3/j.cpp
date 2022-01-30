#include <iostream>
using namespace std;

int main(){
    int n, x;
    int sum=0;
    cin >> n>> x;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];

    }
    for (int i=0; i<n; i++){
        if(a[i]<=x){
            sum=i+1;

        }

    }
    cout << sum;

}