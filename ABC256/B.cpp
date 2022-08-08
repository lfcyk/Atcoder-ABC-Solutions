#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int square[4];
    pair<int,int> A[101];

    fill(square,square+4,0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> A[i].first;
        A[i].second = 0;
    }
    int incre=0;
    for(int i=n-1;i>=0;i--){
        incre+=A[i].first;
        A[i].second+=incre;
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(A[i].second>=4){
            res+=1;
        }
    }
    cout << res;
}