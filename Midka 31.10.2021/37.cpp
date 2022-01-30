#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k = s.size()+2;
    while(k!=0){
        cout << "+";
        k--;
    }
    cout << endl;
    cout << "+" << s << "+";
    cout << endl;
    int m = s.size()+2;
    while(m!=0){
        cout << "+";
        m--;
    }
}
