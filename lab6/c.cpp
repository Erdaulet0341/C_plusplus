#include <iostream>
#include <cmath>
int AA[10000];
int BB[10000];

using namespace std;

void read(int *a, int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

int  dif(int *a, int *b, int n){
    int cnt = 0;
    for(int i=0; i<n; i++){
        int x = a[i];
        AA[x]++;
        int y= b[i];
        BB[y]++;
    }
    for(int i=0; i<10000; i++){
        if(AA[i]!=0 && BB[i]){
            cnt += min(AA[i], BB[i]);
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    read(a,n);
    read(b,n);
    for(int i=0; i< 10000; i++){
        AA[i]=0;
        BB[i]=0;
    }
    cout << dif(a, b, n);

}