#include<iostream>
using namespace std;

int main(){
    int N,M,X,T,D;
    cin >> N >> M >> X >> T >> D;
    int Hm;
    if(M>=X){
        cout << T << endl;
    } else {
        Hm = T - (X-M)*D;
        cout << Hm << endl;
    }

}