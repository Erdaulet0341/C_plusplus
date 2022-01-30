#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main() {
    int n, g_max = 0;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++) {
        int g;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            g = gcd(nums[i], nums[j]);
            if (g > g_max) g_max = g;
        }
    }
    cout << g_max;
}