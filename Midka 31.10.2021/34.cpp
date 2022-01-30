#include <bits/stdc++.h>

using namespace std;

int main() {
    char a[15], b[15];
    int sum1 = 0, sum2 = 0; 
    for (int i = 0; i < 15; i++) {
        cin >> a[i];
    } 
    for (int i = 0; i < 15; i++) {
        cin >> b[i];
        if (a[i] == b[i]) continue;
        else if ((b[i] == 'S' && a[i] == 'P') || (b[i] == 'P' && a[i] == 'R') || (b[i] == 'R' && a[i] == 'S')) sum2++;
        else sum1++;
    }
    if (sum1 > sum2) cout << "First player wins!";
    else if (sum1 < sum2) cout << "Second player wins!";
    else cout << "Friendship";
}