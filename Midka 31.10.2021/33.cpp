#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> k;
    int min = INT32_MAX, pos;
    for (int i = 0; i < n; i++) {
        if (min > abs(num[i] - k)) {
            pos = i;
            min = abs(num[i] - k);
        }
    }
    cout << pos;
}