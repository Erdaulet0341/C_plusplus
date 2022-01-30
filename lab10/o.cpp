#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string f(int n){
    string s="";
    while(n!=0){
        int k = n%2;
        char c = k + 48;
        s = c + s;
        n/=2;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    string s[n];   //
    for(int i=0; i<n; i++){
        while(v[i]!=0){
            int k = v[i]%2;
            char c = k + 48;
            s[i] = c + s[i];
            v[i]/=2;
        }
    }
    for(int i=0; i<n; i++){
        cout << s[i] << endl;
    }


}