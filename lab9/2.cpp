#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum1= (s[0]-48) + (s[1]-48);
    int sum2= (s[4]-48) + (s[5]-48);
    cout << (sum1==sum2 ? "YES" : "NO"); 
}