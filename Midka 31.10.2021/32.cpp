#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    int h=0;
    int o=0; 
    int d=0;

    for(int i=0; i<n; i++){
        if(s[i]=='H'){
            h++;
        }
    }

    for(int i=0; i<n; i++){
        if(s[i]=='O'){
            o++;
        }
    }

    for(int i=0; i<n; i++){
        if(s[i]=='D'){
            d++;
        }
    }

    cout << "Orks: " << o/3 << endl;
    cout << "Dragons: " << d/3 << endl;
    cout << "Humans: " << h/3 << endl;

    return 0;
}