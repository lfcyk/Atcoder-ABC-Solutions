#include<iostream>
using namespace std;
long long X,Y;

long long calc(long long N, bool isRed){

    if (isRed) {
        if(N==1){
            return 0;
        }
        return calc(N-1,true)+X*calc(N,false);
    } else {
        if(N==1){
            return 1;
        }
        return calc(N-1,true)+Y*calc(N-1,false);
    }
}


int main(){
    long long N;
    cin >> N >> X >> Y;
    cout << calc(N,true);
}