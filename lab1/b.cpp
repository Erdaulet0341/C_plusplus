#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int x = b/100;
    int u = b% 10;
    cout << a + x + u;


    return 0;
}