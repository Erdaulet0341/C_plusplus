#include <iostream>
using namespace std;

int main(){
	int d,m,y;
	cin>> d >> m >> y;
	if(d==28 && m == 2 ){
		cout << 1 << " "<< 3 << " " <<y;
	}
	else if(d==31 && m==12  ){
		cout << 1 << " " << 1 <<" "<< y+1;
	}
	else if(d==31 && m<12){
		cout << 1 << " "<< m+1 << " "<< y;
	}
	else if(d<31 && m<12 && m%2!=0){
		cout << d+1 << " "<< m << " "<< y;
	}
	else if(d==30 && m<12 ){
		cout << 1 << " " << m+1 << " " << y;
	}
	else if(d<30 && m<12 ){
		cout << d+1 << " " << m << " " << y;
	}
}
