#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &v, int x){
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            return true;
        }
    }
    return false;
}

int main(){
    int n; 
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    int cnt =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(f(v, v[i]^v[j])==true){
                cnt++;
            }
        }
    }
    cout << cnt;
}