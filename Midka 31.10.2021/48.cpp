#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    while (cin >> s) {
        for (int i = 0; i < s.size(); i++) {
            if ('0' <= s[i] && s[i] <= '9') continue;
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}