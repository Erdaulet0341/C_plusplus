#include <bits/stdc++.h>
using namespace std;

int main(){
    int d,c,p,n;
    cin >> d >> c >> p >> n;
    int depozit = d*100+c;
    int check = n*p;
    int waller = depozit - check;

    int dollar = waller/100;
    int cent = waller%100;
    cout << dollar << " " << cent; 
    
}