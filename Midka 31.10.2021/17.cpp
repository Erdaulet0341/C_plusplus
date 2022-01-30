#include <iostream>
using namespace std;
int main(){
    int n,m,b;
    cin >> n >> m >> b;
    int sum = n+m;
    int per=b*100/sum;
    if(per >= 10){
        cout << "Boris, you are punished!";
    }
    else{
        cout << "You are my sweet baby";
    }
}