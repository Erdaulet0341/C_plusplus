#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    string m = "";
    string s = "";
    while (a != 0)
    {
        int k = a % 2; //1,
        char c = char(k + 48);
        s = c + s; // 10
        a /= 2;
    }

    while (b != 0)
    {
        int k = b % 2;
        char c = char(k + 48);
        m = c + m; // 10
        b /= 2;
    }

    for (int i = 0, j = 0; j < m.size(), i < s.size(); j++, i++)
    {
        if (i + 1 == n && j + 1 == n)
        {
            char temp = m[i];
            m[i] = s[i];

            s[i] = temp;
        }
    }

    int s_sum = 0;

    for(int i=s.size()-1, j=0; j<s.size() , i>=0; j++, i--){
        int k = pow(2, j);
        if(s[i]=='1'){
            s_sum += k;
        }
    }
   
    int m_sum = 0;
    for(int i=m.size()-1, j=0; j<m.size() , i>=0; j++, i--){
        int k = pow(2, j);
        if(m[i]=='1'){
            m_sum += k;
        }
    }

    if(s_sum > m_sum){
        cout << "Good deal for the first number";
    }
    else if(s_sum == m_sum ){
        cout << "Nothing has changed";
    }
    else{
        cout << "Good deal for the second number";
    }
    
    
}