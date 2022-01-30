#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int sum =0;

    for(int i=0; i<s.size(); i++){
        int k = int(s[i]-48);
        sum +=k;
    }
    cout << sum;
}