#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n];

    for(long long i=0; i<n; i++){
        cin >> a[i];
    }

    long long d[n/2];

    for(int i=n-1, j=0; j<n/2, i>=n/2; j++, i--){
        d[j]=a[i];
        
    }
    string s="";

    for(long long i=n/2-1; i>=0; i--){ //29
        while(d[i]!=0){
         int k = d[i]%10; // 9
         char c = k + 48; //9
         string s = c + s ; 

         d[i]/=10;    
        }
        cout << s << " ";
        s="";
    }
    
}