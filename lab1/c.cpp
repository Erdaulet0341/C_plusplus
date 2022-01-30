#include <iostream> 
using namespace std;

int main(){
    int x;
    cin >> x;

    int a = x%2; //0
    x = x / 2; //6

    int b = x%2; //0
    x = x /2; //3

    int c = x%2; //1
    x = x /2; //1

    int d = x%2; //1

    cout << (a*2*2*2 ) + (b*2*2) + (c*2) + (d*1);

   return 0;
}