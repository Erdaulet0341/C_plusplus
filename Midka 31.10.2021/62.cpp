#include <bits/stdc++.h>

using namespace std;

int conv(string s, int size) {
    int res = 0, k = 0;
    for (int i = size - 1; i >= 0; i--) {
        res += (s[i] - 64) * pow(26, k);
        k++;
    }  
    return res;
}

int main() {
    string s;
    cin >> s;
    int size = s.length(); 
    cout << conv(s, size);
}