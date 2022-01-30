#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int max = a[0][0], max2 = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max2 && a[i][j] < max)
            {
                max2 = a[i][j];
            }
        }
    }
    
    if (max == max2)
    {
        cout << 0;
    }
    else
    {
        cout << max2;
    }


}
