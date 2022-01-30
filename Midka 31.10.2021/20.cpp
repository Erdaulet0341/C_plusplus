#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum =0;
    for(int i=1; i<s.size(); i++){
        int k = int(s[i]-48);
        sum += k;

    }
    int first = s[0]-48;

    if(sum%10==first){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
 
}