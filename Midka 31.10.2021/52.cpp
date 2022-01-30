#include <bits/stdc++.h>

using namespace std;

int numb[26];

bool pal(string s) {
    sort(s.begin(), s.end());
    int cnt = 0, odd = 0;
    for (int i = 0; i < s.length(); i++) {
        numb[s[i] - 'a']++;
    }
    for (int i = 0; i <= 26; i++) {
        if (numb[i] % 2 == 1) odd++;
    }
    if (odd > 1) return false;
    else return true;
}

int main() {
    string s;
    cin >> s;
    for (int i = 0; i <= 26; i++) numb[i] = 0;
    if (pal(s)) cout << "Luffy is the pirate king!";
    else cout << "Onepiece";
}