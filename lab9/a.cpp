#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<pair<int, int> > s;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        s.insert(make_pair(x, y));
    }

    for (multiset<pair<int, int> >::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}