#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int odd=0, even=0;
    for(int i=0; i<s.size(); i = i+2){
        int x = int(s[i]-48);
        odd += x;
    }
    
    for (int i=1; i<s.size(); i=i+2){
        int x = int(s[i]-48);
        even += x;
    }
    cout << ((even==odd) ? "YES" : "NO");
}