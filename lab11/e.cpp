#include <bits/stdc++.h>
using namespace std;

string f(string s1, string s2){ // ab bbb
	string ans="";
	int x = min(s1.size(), s2.size());
	if(s1.size()>s2.size()){
		swap(s1,s2);
	}
	for(int i=0; i<x; i++){
		if(s2.find(s1[i]) != string::npos){
			ans+=s1[i];
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	vector<string> v;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	string cm = f(v[0], v[1]);
	for(int i=2; i<n; i++){
		cm = f(cm, v[i]);
	}
	if(cm.empty()){
		cout << "NO COMMON CHARACTERS";
		return 0;
	}
	set<char> st;
	for(int i=0; i<cm.size(); i++){
		st.insert(cm[i]);
	}
	for(set<char>::iterator it=st.begin(); it!=st.end(); it++){
		cout << *it << " ";
	}
	
}
