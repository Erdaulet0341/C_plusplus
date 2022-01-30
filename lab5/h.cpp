#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a[s.size()];
    for(int i=0; i<s.size(); i++){
        a[i]=0;
        for (int j=0; j<s.size(); j++){
            if(s[i]==s[j]){
                a[i]+=1;
            }
        }
    }
    for (int i=0; i<s.size()-1; i++){
        if(a[i] != a[i+1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}