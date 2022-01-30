#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if (n<=m){
        cout << 2;
    }
    else {
        if (n*2 % m == 0){ //
           cout <<  n *2 / m;
        }
        else {
           cout << (n *2/m) + 1;
        }
    }

    return 0;
}