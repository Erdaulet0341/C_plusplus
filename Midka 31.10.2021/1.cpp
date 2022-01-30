#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum[n+1];
    for(int i=0; i<=n; i++){
        sum[i]=0;
    }
    for(int i=0; i<=n; i++){
        int l=i;
        while(l!=0){
            sum[i]+=(l%2);
            l/=2;
        }
    }
    for(int i=0; i<=n; i++){
        if(i==n) cout << sum[i];
        else cout << sum[i] << ",";
    }
    
}