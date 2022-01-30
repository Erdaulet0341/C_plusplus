#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    char j = 97;
    for(int i=0; j<s.size() ,i<s.size(); i++){
        if(s[i]>j){
            j = s[i];
        }
    }  
    cout << j;
    
}