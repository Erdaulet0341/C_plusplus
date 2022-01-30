#include <bits/stdc++.h>
using namespace std;

int main(){
   int n; cin >> n;
   vector < pair <int,int> > v;
   for(int i=0;i<n;i++){
       int a,b;
       cin >> a >> b;
       int x=a+b;
       int y=i+1;
       v.push_back(make_pair(x,y));

   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
      cout << v[i].second << " ";
   }
}