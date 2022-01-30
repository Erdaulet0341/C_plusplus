#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int az=0;
    int max=-1e9;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            az = a[j]-a[i];
            if(az>max){
                max=az;
            }
        }
    }
    cout << max;
}