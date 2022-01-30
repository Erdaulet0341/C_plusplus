#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        int sum = x+y;
        m[sum] = i+1;
    }
    for(multimap<int , int >::iterator i=m.begin(); i!=m.end(); i++){
        cout << (*i).second << " ";
    }
}