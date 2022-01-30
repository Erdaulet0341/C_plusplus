#include <iostream>
using namespace std;

int qosy(int x, int y){
    int sum=x+y;
    return sum;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout <<  qosy(a,b);
}