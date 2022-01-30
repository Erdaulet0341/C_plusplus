#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	char g;
	cin >> a; 
	cin >> g;
	cin >> b;
	cin >> g;
	cin >> c;
	cin >> g;
	cin >> d;
	if(a<256 && b<256 && c<256 && d<256 && a>=0 && b>=0 && c>=0&& d>=0){
		cout << 1;
	}
	else
	{
	cout << 0;
	}
}
