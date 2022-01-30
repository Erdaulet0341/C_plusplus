#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int min = 1e9;
    int ind;

    for(int i=0; i<n; i++){
        int sum = 0;
        for (int j=0; j<m; j++){
            sum += a[i][j];
        }
        if(sum < min){
            min = sum;
            ind = i;
        }
    }
    cout << ind + 1;
}