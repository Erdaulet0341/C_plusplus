#include <iostream>
#include <vector>
using namespace std;

int f(int a[], int x, int n){
	int cnt=0;
	for(int i=0; i<n; i++){
		if(a[i]==x){
			cnt++;
		}
	}
	return cnt;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int max=-1;
	for(int i=0; i<n; i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout << f(a,max,n);
	
}
