#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    { 
        if (i % 10 == 5)
        {
            cout << i << " ";
        }
        else if (i % 100 == 50)
        {
            cout << i << " ";
        }
        else if( i%1000==500){
            cout << i << " ";
        }
        else if(i%10000==5000){
            cout << i << " ";
        }
        else if(i%100000==50000){
            cout << i << " ";
        }
        else if(i%1000000==500000){
            cout << i << " ";
        }
        else if(i%10000000==5000000){
            cout << i;
        }
    }
}