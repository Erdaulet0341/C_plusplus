#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s; ///224
    int n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int k = s[i] - 48;
        if (k % 2 == 0)
        {
            n += k; //0+2+2+4=8
        }
        else
        {
            n = -1; //
        }
    }
    cout << ((n % 2 == 0) ? "Valid" : "Not valid");
}