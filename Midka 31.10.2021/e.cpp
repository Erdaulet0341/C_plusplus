#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i=0; i<n; i++){
		cin >> s[i];
	}
	for(int i=0; i<n; i++){
		reverse(s[i].begin(), s[i].end());
	}
	string c="moc.liamg@";
	
	for(int i=0 ; i<n; i++){
		s[i].erase(s[i].begin()+10,s[i].end());
	
	}
	for(int i=0;i<n; i++){
	
		 if(c==s[i]){
		 	reverse(s[i].begin(), s[i].end());
			s[i].erase(s[i].begin()+s[i].size()+1,s[i].end());
			cout << s[i] << endl;
		}
	}
}
