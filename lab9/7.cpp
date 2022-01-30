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
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sum = f1(v);
    float av=sum/(n*1.0);

    cout << "Average: " << av << endl;
    cout << "Sum: " << sum;
    
}