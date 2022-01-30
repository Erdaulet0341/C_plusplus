#include <iostream>
using namespace std;

int main(){
    int a[6];
    int fan =0;
    int prt = 0;
    for (int i=0; i<6; i++){
        cin >> a[i];
    }

    for (int i=0; i<6; i=i+2){
        fan = fan + a[i];
    }

    for (int i=1; i<6; i=i+2){
        prt = prt + a[i];
    }
    
    if (fan > prt){
        cout << "Grats Yelnur" ;

    }
    else if (fan == prt ){
        cout << "Draw";
    }
    else {
        cout << "Hee Hee Losers";
    }
    

}