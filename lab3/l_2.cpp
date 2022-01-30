#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n; i++) 
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i<m; i++) 
    {
        cin >>    b[i];
    }

    int d[n+m];
    for(int i=0; i<n; i++)
    {
        d[i]=a[i];
    }

    for(int i=n,j= 0; i<n+m; j++, i++)
    {
        d[i]=b[j];
    }

    sort(d, d+n+m);

    for(int i=0; i<n+m; i++)
    {
        cout << d[i] << " ";
    }
    

}