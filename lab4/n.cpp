#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    bool pr;
    for (int i=2; i<=n; i++){
        pr = true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                pr = false;
            }
        }
        if (pr == true ){
            cout << i << " is prime" << endl;
        }
    } 
   
       
}