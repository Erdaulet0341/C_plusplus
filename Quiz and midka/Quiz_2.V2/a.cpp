#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i]; //6 2 8 3
    }
    int max=-1e9;
    int min=1e9;
    for (int i=0; i<n; i++){
        if (a[i]>max){
            max = a[i];
        }
    }

    for (int i=0; i<n; i++){
        if (a[i]<min){
            min = a[i];
        }
    }
    cout << max - min - n + 1;



}