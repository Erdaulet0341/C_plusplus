#include <iostream>
using namespace std;

int main(){
    int n,l,r;
    cin >> n >> l >> r;
    int a[n];
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    long long sum = 0;
    for (int i=1; i<=n; i++){
        if(i>=l && i<=r){
            sum=sum + a[i];
        }
    }
    cout << sum;

    return 0;
}