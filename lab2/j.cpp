#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    for (int i=0; i<n; i++){ 
        int k;
        cin >> k;

        while(k>0){ 

            if(k%10==0){
                sum++;
            }
            k = k/10;
             
        }

    }
    cout << sum;}