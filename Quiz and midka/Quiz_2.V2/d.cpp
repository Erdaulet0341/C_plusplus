#include <iostream>
using namespace std;

int main(){
    string s;
    int max=0;
    cin >> s;
    for (int i=0; i<s.size(); i++){
        for (int j=0; j<i; j++){
            if (s[j] != s[i-j]){
                max = i+1;
            }
        }
    }
    cout << max;


}