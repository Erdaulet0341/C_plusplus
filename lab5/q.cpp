#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    string s1 = "";
    if (t.size() % s.size() == 0)
    {
        int n = t.size() / s.size(); //3
        for (int i = 0; i < n; i++)
        {
            s1 = s1 + s;
        }
    }
    if (s1 == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}