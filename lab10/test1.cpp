#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++ ){
			cin >> a[i][j];
		}
	}
	int max[n];
	int maxx=-1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++ ){
			if(a[i][j]>maxx){
				maxx=a[i][j];
			}
		}
		max[i]=maxx;
		maxx=0;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j]=max[i];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++ ){
			cout <<  a[i][j] << " ";
		}
		cout << endl;
	}
}
