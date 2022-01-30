#include <iostream> 
using namespace std;

int main (){
    int n;
    int max = -1e9;
    cin >> n;
    for (int i=0; i<n; i++){
        int k;
        cin >> k;

        if (k>max){
            max = k;
        }
    }
    cout << max;

    return 0;
}