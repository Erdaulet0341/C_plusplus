#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,k;
	cin >> a >> b >> k;
	int mn = min(a,b);
	vector<int> v;
	for(int i=1; i<=mn; i++){
		if(a%i==0 && b%i==0){
			v.push_back(i);
		}
	}
	reverse(v.begin(), v.end());
	
	cout << v[k-1];
}
