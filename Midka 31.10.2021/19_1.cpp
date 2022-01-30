#include <iostream>
using namespace std;

int main(){
    long long int a, b;
    cin >> a >> b;
    while(a!=b+1){
         if (a % 10 == 5)
        {
            cout << a << " ";
        }
        else if (a % 100 == 50)
        {
            cout << a << " ";
        }
        else if( a%1000==500){
            cout << a << " ";
        }
        else if(a%10000==5000){
            cout << a << " ";
        }
        else if(a%100000==50000){
            cout << a << " ";
        }
        else if(a%1000000==500000){
            cout << a << " ";
        }
        else if(a%10000000==5000000){
            cout << a;
        }
          else if(a%100000000==50000000){
            cout << a;
        }
        a++;
    }
    return 0;
}
    