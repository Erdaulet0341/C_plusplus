#include <iostream>
using namespace std;

int main(){
    int n, a, d;
    cin >> n >> a >> d;
    long long sum = 0;
    while(n!=0){
        cout << a << " ";
        sum += a;
        a+=d;
        
        n--;
    }
    cout << endl;
    cout << "sum: " <<  sum;
}