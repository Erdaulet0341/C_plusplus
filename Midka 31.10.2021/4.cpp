#include <iostream>
using namespace std;
 
long long XOR(long long arr[], long long n)
{
    long long res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

int main()
{   long long  n;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    long long two_power = XOR(arr, n);

    for(long long i=2; i<=two_power; i=i*2){
        if(two_power%i != 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}