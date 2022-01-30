#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s = "";

    while(n!=0){
        int k = n%2;
        char c = k+48;
        s = c + s;
        n/=2;
    }
    int nol = 0;
    int bir = 0;

    for(int i=0; i < s.size(); i++){
        if(s[i]=='1'){
            bir++;
        }
        if(s[i]=='0'){
            nol++;
        }
    }
    cout << s << endl;
    cout << "zeros " << nol << endl;
    cout << "number of units " << bir;
}