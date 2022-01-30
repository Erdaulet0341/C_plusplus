#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s[n];
    int p[n], q[n];
    double pq[n], max=0;
    for(int i=0; i<n; i++){
        cin >> s[i] >> p[i] >> q[i];
        pq[i]=q[i]*1.0/p[i];
        if(pq[i]>max){
            max=pq[i];
        }
    }
    for(int i=0; i<n; i++){
        if(pq[i]==max){
            cout << s[i];
            break;
        }
    }
    return 0;
}