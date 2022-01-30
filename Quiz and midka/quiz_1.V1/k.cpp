#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int k = n/2/2; //1
    int l = n-(k+k);
    cout << k << " " << l << " " << k;

}