#include <iostream>
using namespace std;

int main(){
    string s;
    int n ;
    cin >> s >> n;
    int k=0;

    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            k++;

        }
    }
     cout << ((n<=k) ? "YES" : "NO");
}