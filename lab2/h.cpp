#include <iostream>
using namespace std;

int main()
{
    int n;
    int even = 0;
    int odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << even << " " << odd;
}