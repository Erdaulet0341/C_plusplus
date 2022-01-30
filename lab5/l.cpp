#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t = s;
    sort(s.begin(), s.end());
    cout << ((s==t) ? "YES" : "NO");
    
}