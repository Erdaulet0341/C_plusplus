#include <iostream>
using namespace std;

int f(string s){
    if(s=="MON"){
        return 6;
    }
    else if( s=="TUE"){
        return 5;
    }else if( s=="WED"){
        return 4;
    }
    else if( s=="THU"){
        return 3;
    }
    else if( s=="FRI"){
        return 2;
    }
    else if( s=="SAT"){
        return 1;
    }
    else if( s=="SUN"){
        return 7;
    }
}

int main(){
    string s;
    cin >> s;
    cout << f(s);
}