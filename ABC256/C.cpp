#include<bits/stdc++.h>
using namespace std;
int h[3],w[3],m[3][3];
int res=0;

void brute(int m[3][3]){
    for(int i=0;i<2;i++){
        m[i][2]=h[i]-m[i][0]-m[i][1];
        m[2][i]=w[i]-m[0][i]-m[1][i];
        if((m[i][2]<0)||(m[2][i]<0)){
            return;
        }
    }
    m[2][2]=h[2]-m[2][1]-m[2][0];
    
    if((m[2][2]+m[1][2]+m[0][2]==w[2])&&(m[0][2]>0)&&(m[1][2]>0)&&(m[2][2]>0)&&(m[2][0]>0)&&(m[2][1]>0)){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << m[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        res+=1;
    }
    int mBaru[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mBaru[i][j]=m[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mBaru[i][j]+=1;
            brute(mBaru);
            mBaru[i][j]-=1;
        }
    }
    
}

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            m[i][j]=1;
    }
    for(int i=0;i<3;i++){
        cin >> h[i];
    }
    for(int i=0;i<3;i++){
        cin >> w[i];
    }
    brute(m);
    cout << res;
}