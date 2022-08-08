#include<iostream>
using namespace std;

int main(){
    int k;
    cin >> k;
    int p = k/60;
    int s = k % 60;
    int j = 21 + p;
    if(s<10){
        cout << j << ":" << "0" << s;
    } else {
        cout << j << ":" << s;
    }
    
}