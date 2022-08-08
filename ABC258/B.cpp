#include<iostream>
#include<cmath>
#include <algorithm>
#define n N
using namespace std;
int N,A[11][11];
int res=-1;
int x[] = {0    ,1  ,1  ,1  ,0  ,-1  ,-1  ,-1};
int y[] = {-1   ,-1 ,0  ,1  ,1  ,1  ,0  ,-1};

void readM(){
    cin >> N;
    string s;
    for(int i=0;i<N;i++){
        cin >> s;
        for(int j=0;j<N;j++){
            A[i][j] = s[j] - '0';
        }
    }
}

void writeM(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
long long cari(int i, int j){
    long long ijmaxi=-1;
    for(int k=0;k<8;k++){
        long long ijsatuarah=0;
        for(int l=0;l<n;l++){
            ijsatuarah+=A[(n+i+(x[k])*l)%n][(n+j+(y[k])*l)%n]*pow(10,n-l-1);
        }
        //cout << ijsatuarah << endl;
        ijmaxi = max(ijmaxi,ijsatuarah);
    }
    return ijmaxi;
}

int main(){
    readM();

    long long res=-1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            res = max(res,cari(i,j));
        }
    }

    cout << res << endl;
}