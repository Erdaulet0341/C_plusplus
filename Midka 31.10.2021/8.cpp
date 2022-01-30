#include <iostream>
using namespace std;

void binary(int x, int sum)
{
    while (x != 0)
    {
        int k = x % 2;
        sum += k;
        x /= 2;
    }
    cout << sum;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        binary(i, sum);
    }

    int sum = 0;
    binary(n, sum);
}