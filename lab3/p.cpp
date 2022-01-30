#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, b;
    cin >> n;
    b = sqrt(n);
    if (n%b==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}