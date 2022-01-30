#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int month  = 0;
    int depozite=0;
    int ost=0;
    while(depozite<=500000){    
        ost=n*0.3;
        depozite+=ost;
        n=n+n*0.1;
        month++;
    }
    cout << month;
}