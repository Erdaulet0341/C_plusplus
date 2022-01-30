#include <bits/stdc++.h>
using namespace std;

int f1(vector<int> v){
    int sum=0;
    for(int i=0; i<v.size(); i++){
        sum+=v[i];
    }
    return sum;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a) cout << "Yes";
    else  cout << "No";
    
}