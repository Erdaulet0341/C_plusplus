#include <iostream>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    while (cin >> n)
    {
        if (n % 3 == 0)
        {
            cnt++;
        }
        else {
         break;
        }
    }
    cout << cnt;
}