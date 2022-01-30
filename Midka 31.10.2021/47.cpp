#include <iostream>
using namespace std;

void pal(string s){
    for(int i=0, j=s.size()-1; i<s.size(), j>=0; i++, j--){
        if(s[i]!=s[j]){
            return;
        }
    }
   
}

int main(){
    int n;
    cin >> n;
    string s;
    while(n!=0){
        cin >> s;
        pal(s);
        n--;
        s="";
    }
    


}