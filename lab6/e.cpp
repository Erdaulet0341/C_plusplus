#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float hipotenuza(float x, float y){
    float sum = x*x + y*y;
    float kbrt = sqrt(sum);

    return kbrt;
}

int main(){
    float a, b;
    cin >> a >> b;

    float k = hipotenuza(a,b);

    cout << setprecision(4);
    cout << k;
}