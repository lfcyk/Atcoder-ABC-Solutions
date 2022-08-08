#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int res = 1;
    for(int i=0;i<n;i++){
        res*=2;
    }
    cout << res;
}