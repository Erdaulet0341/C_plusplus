#include <bits/stdc++.h>
using namespace std;

void f(int *a, int n)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void f1(int *a, int n)
{
    sort(a, a + n);
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int ar[m];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                ar[j] = a[i][j];
            }
            f(ar, m);
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                ar[j] = a[i][j];
            }
            f1(ar, m);
        }
    }
}