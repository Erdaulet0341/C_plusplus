#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int x=-1;

int f(){
    x++;
    long long int sum=1;
    for(int j=0; j<x; j++){
        sum*=x;
    }
    return sum;
}

void f1(int val){
    cout << val << " ";
}

int main(){
    long long n;
    cin >> n;
    vector<long long> v(n+1);
    generate(v.begin(), v.end(), f);

    for_each(v.begin(), v.end(), f1);
}