#include <iostream>
using namespace std;

void year(int a[], int n, int sum, int i, int d){
    i=i+1;
	while(i!=12){
		sum += a[i];
		i++;
	}
	cout << sum-d+1;
	
}

int main(){
	int m , d;
	cin >> m >> d;
    int n=12;
	int sum=0;

	int arr[n] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31 ,30 , 31};
    if(m>=12 || d>32 ) { //
        cout << "Not correct";
        return 0;

    }

    if(d>arr[m-1] || d<1 ) { //
        cout << "Not correct";
        return 0;

    }

	for(int i=0; i<12; i++){

		if(i==m-1){
			sum+=arr[i];
			year(arr, n ,sum, i,d);
            return 0;
		}
	}
}