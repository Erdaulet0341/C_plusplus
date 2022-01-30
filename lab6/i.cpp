#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;{
        for(int i=0; i<s.size(); i=i+2){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
        }
    }
    cout << s;
}