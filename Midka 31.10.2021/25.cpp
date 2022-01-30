#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0, j=s.size()-1; j>=0, i<s.size(); j--, i++){
        if(s[i]!=s[j]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

}