#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    int max=-1e9;
    
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i==j){
                if(a[i][j]>max){
                    max = a[i][j];
                    break;
                } 
            }
        }
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(a[i][j]==max){
               cout << "Maximum element is: " << max << " with coordinates: " << i+1 << ";" << j+1;
               return 0;
           }
        }
    }

}