#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    cin >> ss;

    set<char> s;
    for (int i = 0; i < ss.size(); i++)
    {
        ss[i] = tolower(ss[i]);
        s.insert(ss[i]);
    }

    cout << s.size() << endl;

    for (set<char>::iterator i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
}