#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n*2; i++){
		for(int j=0; j<=i-i; j++){
			cout << "1";
		}
		for(int j=0; j<=i; j++){
			cout << '*';
		}
		for(int j=0; j<=i-i; j++){
			cout << "1";
		}
		cout << endl;
	}
}
