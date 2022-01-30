#include <bits/stdc++.h> 
 
using namespace std; 
int cnt[1000][1000]; 
 
int n, m; 
int di[8] = {1, 1, 1, -1, -1, -1, 0, 0}; 
int dj[8] = {-1, 0, 1, -1, 0, 1, -1, 1}; 
 
bool inside(int x, int y) { 
    return 0 <= x && x < n && 0 <= y && y < m; 
} 
 
void fill(int x, int y) { 
    for (int i = 0; i < 8; i++) { 
        int tox = x + di[i]; 
        int toy = y + dj[i]; 
        if (inside(tox, toy)) { 
            cnt[tox][toy]++; 
        }  
    } 
} 
 
int main(){ 
    // int n, m; 
    cin >> n >> m; 
    int k; 
    cin >> k; 
    char a[n][m]; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            a[i][j] = '.'; 
    for (int i = 0; i < k; i++) { 
        int x, y; 
        cin >> x >> y; 
        a[x][y] = '*'; 
        cnt[x][y] = 1; 
        fill(x, y); 
    } 
 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            if (a[i][j] == '.' && cnt[i][j] > 0) { 
                a[i][j] = (char)(cnt[i][j] + 48);  
            } 
        } 
    } 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            cout << a[i][j] << ' '; 
        } 
        cout << '\n'; 
    } 
    return 0; 
}