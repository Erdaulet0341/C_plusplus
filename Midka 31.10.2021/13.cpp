#include <iostream>
using namespace std;

bool prime(int x)
{ //7
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false; 
        }
    }
    return true;
}

bool dictance(int x){
    if(x>=500){
        return false;
    }
    return true;
}

bool even(int x){
    if(x%2==1){
        return false;
    }
    return true;
}

int main()
{
    int n, f;
    cin >> n >> f;
    if((even(f)==true) && (dictance(n)==true) && (prime(n)==true)){
        cout << "Good job!";
    }
    else{
        cout << "Try next time!";
    }
}