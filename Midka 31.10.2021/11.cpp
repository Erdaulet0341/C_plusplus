#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double n;
	char c;
	cin >> n >> c;
	int k;
	if(c=='k'){
		cin >> k;
		double m = n/1024;
        cout << fixed;
		cout << setprecision(k);
		cout << m;
        return 0;
	}
	cout << n * 1024;
	
	
}