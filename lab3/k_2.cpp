#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max=-1e9;
    int min=1e9;

    for (int i=0; i<n; i++){
        if (a[i]>max){
            max=a[i];
        }
    }

    for (int i=0; i<n; i++){
        if (a[i]<min){
            min=a[i];
        }
    }

    for(int i=0; i<n; i++){
        if(a[i]==max)
        {
           cout << min<<  " ";
        }
        else
        {
            cout << a[i] << " ";

        }
    }





}