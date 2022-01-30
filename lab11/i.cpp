#include <bits/stdc++.h>
using namespace std;

bool f(string s){
	for(int i=0, j=s.size()-1; i<s.size(), j>=0; i++, j--){
		if(s[i]!=s[j]){
			return false;
		}
	}
	return true;
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    while(next_permutation(s.begin(), s.end())){
    	if(f(s)){
    		cout << "ZA WARUDO TOKI WO TOMARE";
    		return 0;
		}
	}
	cout << "JOJO";
}
