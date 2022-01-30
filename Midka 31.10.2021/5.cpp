#include <bits/stdc++.h>
using namespace std;

int f(int x, int y){
    return x^y;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << f(n,f(m, n+m));
}