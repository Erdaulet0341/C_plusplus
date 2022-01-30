#include <bits/stdc++.h>
using namespace std;

string tobinary(int x){
	string s="";
	while(x!=0){
		int k = x % 2 ;
		char c = k + 48;
		s = c + s;
		x/=2;
	}
	return s;
}

int main(){
	int n;
	cin >> n;
	set<int> st;
	int a[n];
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		st.insert(x);
		
	}
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	string ss="";
	for(set<int>::iterator it=st.begin(); it!=st.end(); it++){
		ss = tobinary((*it));
	}
    if(ss.size()<n){
	 	while(ss.size()!=n){
	 		ss += '0'; 
		}
	}
	cout << ss;
}
