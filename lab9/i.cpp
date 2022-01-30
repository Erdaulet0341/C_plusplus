#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    string s1[n];
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(m[s]==0){
            s1[i] = "new user added";
        }
        else{
            s1[i]= "user already exists";
        }
        m[s]=1;
    }
    for(int i=0; i<n; i++){
        cout << s1[i] << endl;
    }
}