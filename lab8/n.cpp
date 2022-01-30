#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> v;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.insert(x);
    }
    for(set<int>::iterator it=v.begin(); it!=v.end(); it++) {
        if(*it%2==1) {
           cout << *it << " ";
        }
    }
}