#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1[n];
    string s2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i] >> s2[i];
    }
    int m;
    cin >> m;
    string c1[m];
    string c2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> c1[i] >> c2[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j, m; j++)
        {
            if (s1[i] == c1[j] && s2[i]!=c2[j])
            {
                cout << "password error";
                cout << endl;
            }
            else if (s1[i] != c1[j] && s2[i] == c2[j])
            {
                cout << "login error";
                cout << endl;
            }
            else if(s1[i]==c2[j] && s2[i]==c2[j])
            {
                cout << "correct password";
                cout << endl;
            }
        }
    }
}