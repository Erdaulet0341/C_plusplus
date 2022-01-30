#include <iostream>
using namespace std;

void prog(int x){
    int k=x;
    for(int i=0; i<x ; i++){
        cout << k << " ";
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        prog(i);
    }
}