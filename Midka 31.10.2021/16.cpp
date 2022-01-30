#include <bits/stdc++.h>

using namespace std;

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m, y;
    cin >> d >> m >> y;
    if (y < 1970 || y > 2035) {
        cout << "NO";
        return 0;
    }
    if (m < 1 || m > 12) {
        cout << "NO";
        return 0;
    }
    if (d > days[m - 1] || d < 1) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}