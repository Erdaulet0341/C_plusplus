#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    string sum1="";
    for(int i=0; i<n/2; i++){
        sum1+=s[i];
    }
    string sum2="";
    for(int i=n/2; i<n; i++){
        sum2+=s[i];
    }
    int man1=0;
    for(int i=0; i<sum1.size(); i++){
        int l=sum1[i]-48;
        man1+=l;
    }
    int man2=0;
    for(int i=0; i<sum2.size(); i++){
        int l=sum2[i]-48;
        man2+=l;
    }
    cout << ((man1==man2) ? "YES" : "NO");
}