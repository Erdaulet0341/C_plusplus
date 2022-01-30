#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    int max=-1e9, min=1e9;
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    for (int i= 0; i<n; i++){
        if (ar[i]>max){
            max = ar[i];
        }
        if(ar[i]<min){
            min = ar[i];
        }
    }
    for (int i=0; i<n; i++){
        if(ar[i] == max) { // 9 = 9
            cout << min << " ";
        }
        else {
            cout << ar[i]<< " ";
        }
    }
    
    return 0;
}