#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i=0; i<n; i++){
		cin >> s[i];
	}
	string k[n];
	for(int i=0; i<n; i++){
		k[i]=s[i];
		reverse(s[i].begin(), s[i].end());
	}
	string c="moc.liamg@";
	
	for(int i=0 ; i<n; i++){
		s[i].erase(s[i].begin()+10,s[i].end());
	
	}
	for(int i=0;i<n; i++){
	
		 if(c==s[i]){
		 	int x = k[i].size()-c.size();
			k[i].erase(k[i].begin()+x,k[i].end());
			cout << k[i] << endl;
		}
	}
}
