#include<iostream>
#include <algorithm> 
using namespace std;
int main()
{
    int a, b, c; 
    cin>>a>>b>>c;
    int arr[a];
    for(int i =0; i<a; i++){
        cin >> arr[i];

    }
    b--;
    reverse(arr+b, arr+c);
    for(int i =0; i<a; i++){
        cout <<  arr[i] << " ";

    }




}