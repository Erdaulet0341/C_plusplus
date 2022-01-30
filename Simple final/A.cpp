#include <iostream>
using namespace std;

int f(string s){
	int sum =0;
	for(int i=0;i<s.size(); i++){
		int k=s[i]-48;
		sum+=k;
	}
	return sum;
}
string f1(int x){
	string j="";
	while(x!=0){
		int k=x%10;
		char c = k+48;
		j = c+j;
		x/=10;
	}
	return j;
}

int main(){
	string s;
	cin >> s;
	int n = s.size();
	int cnt=0;
	if(n==1){
		cout << s << " " << 0;
		return 0;
	}
	else{
	
		while(n!=0){
			int k = f(s);
			cnt++;
			s = f1(k);
			n=s.size(); 
			if(s.size()<=1){
				n=0;
			}
		}
	}
	cout << s << " " << cnt;
}
