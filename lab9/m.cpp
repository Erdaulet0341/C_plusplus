#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    queue<string> qu;
    string s1[n];
    for(int i=0; i<n; i++){
        string s;
        int x;
        cin >> x;
        if(x==1){
            cin >> s;
            qu.push(s);
        }
        else{
            qu.pop();
        }

        if(qu.empty()){
            s1[i] = "queue is empty";
        }
        else{
            s1[i]= qu.front(); 
        }
    }

    for(int i=0; i<n; i++){
        cout << s1[i] << endl;
    }
}