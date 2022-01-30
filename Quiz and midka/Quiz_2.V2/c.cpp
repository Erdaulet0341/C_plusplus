#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int num[1001];
    for (int i=0; i<1001; i++){
        
        num[i] = 0;
    }

    for (int i=0; i<n; i++){
        int d = a[i];
        num[d]++;
    }

    int max=-1e9;

    for (int i=0; i<1001; i++){
        if(num[i]>max){
            max=num[i];
        }
    }

    for (int i=1001; i>0; i--){
        if(num[i]==max)
        cout << i << " ";
    }

}