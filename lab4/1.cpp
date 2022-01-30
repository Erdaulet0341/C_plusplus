#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max=-1e9;
    int a[n][n];
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++)  {
          cin >> a[i][j];
      }
    }
    cout << "en ulken element ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(a[i][j]>max){
                    max = a[i][j];
                }

            }
        }
    }

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++)  {
        if(a[i][j]==max){
            cout << "en ulken element " << max << " onyn orny " << i+1 << ":"  << j+1 ; 
        }
      }
    }
    
    
}