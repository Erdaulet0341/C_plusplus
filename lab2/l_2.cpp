#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int l;
    cin >> l;
    for (int i = 0; pow(2, i) <= l; i++){
        cout << pow(2, i) << " ";
    }
}