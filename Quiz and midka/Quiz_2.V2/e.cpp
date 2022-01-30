#include <iostream>
using namespace std;

int main(){
    int arr[10];
    string s;
    cin >> s;
    for (int i=0; i < 10; i++){
        arr[i]=0;
    } 
    for (int i=0; i<s.size(); i++){
        int x = int(s[i] - 48);
        arr[x]++;
    } 
    for (int i=0; i<10; i++){
        if(arr[i] != 0){
            cout << i << ":"<< " " << arr[i] << endl;
        }
    }
    return 0;
}
