#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    string s[n];
    if(n==0 or m==0){
        cout << "error";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

        }
    }

    int sum[n];
    int max=-1e9;

     for(int i=0; i<n; i++){
    
        for(int j=0; j<m; j++){
            sum[i]+=a[i][j];
        }
        cout << s[i] << " - " <<sum[i] << endl;
        if(sum[i]>max){
            max=sum[i];
        }
    }
    cout << max << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==max){
                cout<< "The best " ;
            }
        }
    }
}