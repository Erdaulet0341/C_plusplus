#include <iostream>
using namespace std;

int main()
{
    int n;
    int max = -1e9;

    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int r = 0, l = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                r = i + 1;
                l = j + 1;
            }
        }
    }

    cout << r << " " << l;
}