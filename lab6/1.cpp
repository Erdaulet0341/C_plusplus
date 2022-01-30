#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int AA[10000];
    int BB[10000];

    for(int i=0; i<10000; i++){
       AA[i]=0;
       BB[i]=0; 
    }

    for(int i=0; i<n; i++){
        int k=a[i];
        int l=b[i];
        AA[k]++;
        BB[l]++;
    }

    int cnt=0;

    for(int i=0; i<10000; i++){
        if(AA[i]!=0 && BB[i]){
            cnt += min(AA[i], BB[i]);
        }
    }
    cout << cnt;
    
    
}