#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<string,set<int> > m;
	for(int i=0; i<n; i++){
		string s;
		int x;
		cin >> s >> x;
		m[s].insert(x);
	}
	for(map<string,set<int> >::iterator it=m.begin();it!=m.end(); it++){
		cout << it->first << " ";
		if(it->second.size()<3){
			cout << "NO BONUS";
		}
		else{
			cout << "+1";
		}
		cout << endl;
	}
}
