#include <bits/stdc++.h>
using namespace std;
int missingK(int a[], int k,
             int n)
{
    int difference = 0,
        ans = 0, count = k;
    bool flag = 0;
    if (a[0] != 1){
      difference = a[0]-1;
      if (difference >= count)
          return count;
      count -= difference;
      }
    for(int i = 0 ; i < n - 1; i++)
    {  
        difference = 0;
        if ((a[i] + 1) != a[i + 1])
        {
            difference +=
                (a[i + 1] - a[i]) - 1;
            if (difference >= count)
                {
                    ans = a[i] + count;
                    flag = 1;
                    break;
                }
            else
                count -= difference;
        }
    }
    if(flag)
        return ans;
    else
        return  -1;
}
int main()
{
    int ID[50], i = 0, n, k;
    while (cin.peek() != '\n') {
        cin >> n;
        ID[i] = n; 
        i++;
    }
    cin >> k;
    int length = sizeof(ID) / sizeof(ID[0]);
    int missing = missingK(ID, k, length);
     
    cout << missing << endl;
     
    return 0;
}