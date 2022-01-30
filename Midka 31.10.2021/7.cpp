#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, m;
    cin >> a >> n >> b >> m;
    int ba, bb;
    for (int i = 0; i < n; i++)
    {
        a /= 2;
    }
    ba = a % 2;
    for (int i = 0; i < m; i++)
    {
        b /= 2;
    }
    bb = b % 2;
    if (ba == bb)
    {
        cout << "Thunderclap and Flash!";
    }
    else
    {
        cout << "Thunder Breathing... First form...";
    }
}