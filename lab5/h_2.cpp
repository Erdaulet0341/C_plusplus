#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a[10];
    for(int i=0; i<10; i++){
        a[i] = 0;
    }

    for(int i=0; i<s.size(); i++){
        int x = (s[i]-48);
        a[x]++; 
    }

    int x=-1;

    for(int i=0; i<10; i++){
        if(a[i] != 0){
            if(x == -1){
                x = a[i]; 
            }
            if(a[i] != x) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

}