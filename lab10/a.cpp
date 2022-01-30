#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    string s[n];
    for(int i=0; i<n; i++){
        int x;
        string ss;
        cin >> ss >> x;
        a[i]=x;
        s[i]=ss;    
    }

    sort(a, a+n);
    sort(s, s+n);
    
    for(int i=0; i<n; i++){
        cout << s[i] << " " << a[i];
        cout << endl;
    }
}