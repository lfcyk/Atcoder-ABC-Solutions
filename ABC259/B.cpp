#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int a,b,d;
    cin >> a >> b >> d;
    
    float theta = d*M_PI/180;
    float x = cos(theta)*a-sin(theta)*b;
    float y = cos(theta)*b+sin(theta)*a;
    printf("%.10f %.10f\n", x,y);
    //cout << fixed << setprecision(10) <<x << " " << y << endl;
}