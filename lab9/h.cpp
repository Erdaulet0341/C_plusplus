#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        m.insert(make_pair(s, i+1));
    }
    for(map<string , int>::iterator it=m.begin(); it!=m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}