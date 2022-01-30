#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long d, c, n, di, ci;
    cin >> d >> c >> n >> di >> ci;
    long long cost = n*(d*100+c); //
    long long ihave = di*100+ci;
    long long zdacha = ihave-cost;

    long long dollar = zdacha/100;
    long long cent = zdacha%100;

    if (zdacha >= 0)
    {
        cout << dollar << " " << cent;
    }
    else
    {
        cout << -1;
    }
}