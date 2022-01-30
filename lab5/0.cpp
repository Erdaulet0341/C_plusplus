#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[6];
    for(int i=0; i<6; i++){
        a[i]=0;
    }
    for(int i=0; i<s.size(); i++){
        int k = s[i]-48;
        a[k]++;
    }
    
    sort(a, a+6);
    for(int i=0; i<6; i++){
        cout << a[i] << " ";
    }
}