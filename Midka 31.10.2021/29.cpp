#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=2; i<=n*3-1; i=i+3){
        cout << i << " "; 
    }
}