#include <iostream>
#include <stdlib.h>     
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int) time(NULL));

    int num = rand() % 100 + 1; 

    cout << "Enter any number between 100 and 0: " ;
   
    int val = 0, sum;     
    while(val!=num)
    {
        cin >> val;
        if(val>num)
        {
            cout << "it's bigger" << endl;
        }
        else if(val<num)
        {
            cout << "it's smaller" << endl;
        }
        else 
        {
            cout << "you are winner" << endl;
            
            break;
        }
        sum++;
    
    }
    cout << "You are find " << sum << " attempt" << endl;
    cout << "Your happiness " << 100/sum << "  percent" ;
}