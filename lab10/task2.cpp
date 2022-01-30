#include <bits/stdc++.h>
using namespace std;

string f(int x){
    string s="";
    while(x!=0){
        int a = x%10;
        char c = a+48;
        s= c +s;
        x/=10;
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size() / 5;
    string der="";
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '^')
        {
            int  d = s[0]-48;
            int w = s[i+1]-48;
            int fl=d*w;
            string ss=f(fl);
            der+=ss;
            der+='x';
            break;
        }
        cnt++;
    }
    for (int i = cnt + 1; i < s.size(); i++)
    {
        if (s[i] == '^')
        {
            char k = s[i-2];
            der+=k;
            break;
        }
        
        if(s[i]=='+'){
            der+='+';
        }
        if(s[i]=='-'){
            der+='-';
        }
        cnt++;
    }
    for (int i = cnt + 1; i < s.size(); i++)
    {
        if (s[i] == '^' && s[i + 1] == '0')
        {
            continue;
        }

    }
    int w=1, q=1;
    for(int i=0; i<der.size(); i++){
        if(der[i]=='+'){
            int k= der[i+1]-48;
            int g=der[i-2]-48;
            w = (k/g)*-1;
            //cout << w;
        }
        if(der[i]=='-'){
            int k= der[i+1]-48;
            int g=der[i-2]-48;
            q = (k/g);
            //cout << q;

        }
    }
    int fir, sec, thir;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='x' && i<2){
            fir = (s[0]-48);
        }
        if(s[i]=='x' && i>3 && i<8){
            sec=(s[i-1]-48);
        }
        if(s[i]=='x' && i>9){
            thir = (s[i-1]-48);
        }
    }
    cout << fir << " " << sec << " " << thir << endl;
    for(int i=0; i<der.size(); i++){
        if(der[i]=='+'){
            int ans=fir-sec-thir;
            if(ans>0){
                cout << "local maxima = (" << w << "," << ans << ")";
            }
            else{
                cout << "local minima = (" << w << "," << ans << ")";
            }
            return 0;
        }
        if(der[i]=='-'){
            int ans=fir+sec+thir;
            if(ans>0){
                cout << "local maxima = (" << w << "," << ans << ")";
            }
            else{
                cout << "local minima = (" << w << "," << ans << ")";
            }
            return 0;
        }
    }
}