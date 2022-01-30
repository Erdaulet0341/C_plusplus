#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int cnt=0;
    cin >> x; // 1 
    while(x!=0){ //
        int n;
        cin >> n; //0
        if(x<n){
            cnt++;
        }
        x=n; //0
    }
    cout << cnt;
}