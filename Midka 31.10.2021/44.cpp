#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "#";
                
            }
            for (int j = 0; j <n -1-i; j++)
            {
                cout << ".";
                
            }
            cout << endl;
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1-i; j++)
            {
                cout << ".";
            }
             for (int j = 0; j <= i; j++)
            {
                cout << "#";
                
            }
            cout << endl;
        }
    }
    return 0;
}