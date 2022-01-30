#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    map<string,int> m;
    while(cin >> s){
        int i=1;
        m[s]+=i;

    }

    for(map<string , int>::iterator i=m.begin(); i!=m.end(); i++){
        cout << (*i).first << " : " << (*i).second << endl;
    }
}