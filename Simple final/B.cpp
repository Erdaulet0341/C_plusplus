#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >>  n>>m;
	char a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i+1][j]=='#' && a[i][j+1]=='#'){
				cout << "NO";
				return 0;
			}
			if(a[n-1][m-1]=='#'){
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}
