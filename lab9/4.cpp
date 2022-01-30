#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1;
    cin >> x1 >> y1;
    double ud = x1/(y1*1.0);
    int dr = x1/y1;
    int qd = x1%y1;
    cout << "Usual division: "  <<ud << endl;
    cout << "Division without remainder: " << dr << endl;
    cout << "Remainder: " << qd;


    
}