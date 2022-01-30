#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
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
    bool ok = 1;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
            {
                cnt++;
            }
        }

        v.push_back(cnt);
    }
   
    int max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != max)
        {
            ok = false;
        }
    }
    if (ok)
    {
        cout << "Numbers are equal";
        
    }
    else
    {
        int max = v[0];
        int k=0;
        for (int i=1 ; i < n; i++)
        {
            if (v[i] > max)
            {
                max = v[i];
                k = i;
            }
        }
        cout << k+1;
    }
}
