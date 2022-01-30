#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double x = 1;
    double odd = 0;
    double even = 0;
    long long sum = 0;

    while (x > 0)
    {   
        cin >> n;
        if(n<0){
            if(n%2==0){
                even--;
            }
            else{
                odd--;
            }
        }
        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        sum++;
        x = n;
    }

    sum = sum - 1;

    double pe = even * 100 / sum;
    double po = odd * 100 / sum;
    cout << fixed;
    cout << setprecision(5);
    cout << pe << " " << po;
}