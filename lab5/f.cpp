#include <iostream>
using namespace std;

int main(){
    string c;
    int l, r;
    cin >> c >> l >> r;
    for(int i=l; i<=r; i++){
        cout << c[i];
    }
}