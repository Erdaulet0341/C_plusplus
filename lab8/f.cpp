#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int l, r;
    cin >> l >> r;

   v.insert(v.begin()+l, r);

   for(vector<int>::iterator i=v.begin(); i!=v.end(); i++){
       cout << *i << " ";
   }
}