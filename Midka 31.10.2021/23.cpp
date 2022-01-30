#include <iostream>
using namespace std;

int main()
{
    long double a, b;
    long long degree=0;
    cin >> a >> b;
    if (a <= b)
    {
        long long k = b / a;
        long double l = b / a;
        if(k!=l){
            cout << "NO";
            return 0;
        }
        while (k != 1)
        {
            if (k % 2 == 1)
            {
                cout << "NO";
                return 0;
            }
            degree++;
            k /= 2;
        }
        cout << "YES " << degree ;
    }
    if(a>b){
        long long  k = a / b;
        long double l = a / b;
        if(k!=l){
            cout << "NO";
            return 0;
        }
        while (k != 1)
        {
            if (k % 2 == 1)
            {
                cout << "NO";
                return 0;
            }
            degree--;
            k /= 2;
        }
        cout << "YES " << degree ;
    }
}