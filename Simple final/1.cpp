#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			cout << 1;
		}
		for(int j=0; j<=i+i-1; j++){
			cout << 1;
		}
		for(int j=0; j<n-1-i; j++){
			cout << 1;
		}
		cout << endl;
	}
}
