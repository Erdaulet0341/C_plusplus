#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >>k;
    map<int , int > m;
    for(int i=0; i<n; i++){ // 1 2 2 4
        int x; cin >> x;
        m[x]++; 
    }
    cout << m[k]; //2
}