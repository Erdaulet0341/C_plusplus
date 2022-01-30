#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int k = x2-x1;
    int g = y2-y1;

    double sum = k*k + g*g;
    double ans= sqrt(sum);
    cout << fixed;
    cout << setprecision(10);
    cout << ans;
    
}