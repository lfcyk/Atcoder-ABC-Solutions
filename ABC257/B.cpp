#include<iostream>
using namespace std;
#define rep(i,n) for(int i=1;i<(n+1);i++)


int main(){
    int n,k,q;
    cin >> n >> k >> q;
    int board[202],p[202],l[1002];
    fill(board,board+202,false);
    rep(it,k){
        cin >> p[it];
        board[p[it]]=true;
    }
    rep(it,q){
        cin >> l[it];
    }
    rep(i,q){
        int index=p[l[i]];
        if(index==n){
            continue;
        } else if(board[index+1]){
            continue;
        } else {
            board[index]=false;
            board[index+1]=true;
            p[l[i]]+=1;
        }
        
    }
    rep(i,n){
        if(board[i]){
            cout << i << ' ';
        } 
    }
}