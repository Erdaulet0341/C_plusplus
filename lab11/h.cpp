#include <bits/stdc++.h>
using namespace std;

char f(int x){
	char c = x - 26;
	return c;
}

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){ // Z = 90
		int k = s[i]+n; // 91
		//cout <<"K+N=" << k+n << endl;
		if(k<90){
		    s[i]=s[i]+n;
		}
		else if(k==90){
			s[i]='Z';
		}
		else
		{
			s[i]= f(k);
		}
	}
	cout << s;
}
