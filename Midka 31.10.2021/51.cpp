#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int cnt = 0, cnt_max = 0;
    char f, f_max;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != s[i + 1] && cnt == 0) continue;
        else if (( s[i] != s[i + 1]) && cnt != 0) {
            if (cnt > cnt_max) {
                f = s[i];
                cnt_max = cnt;
            }
            cnt = 0;
        }
        else if (s[i] == s[i + 1]) {
            cnt++;
            if (i == s.length() - 2 && cnt > cnt_max) {
                f = s[i];
                cnt_max = cnt;
            }
        }
    }
    if (s.length() == 1) f = s[0];
    cout << f << " " << cnt_max + 1;
}
