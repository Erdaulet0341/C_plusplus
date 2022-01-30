#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double d, c, n, di, ci;
    cin >> d >> c >> n >> di >> ci;
    long double cost = n * d + n * (c / 100);
    long double ihave = di + (ci / 100);
    long double zdacha = ihave - cost;

    long long dollar = zdacha;
    long long k = zdacha * 100;
    long long cent = k % 100;

    if (zdacha >= 0)
    {
        cout << dollar << ' ' << cent;
    }
    else
    {
        cout << -1;
    }
}