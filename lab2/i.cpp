#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    for (int i =0;i<n; i++){
        int k;
        cin >> k;

        if(k%10==7){
            sum++;
        }
        else {
            sum = 0;
        }
               
    }
    cout << sum;

}