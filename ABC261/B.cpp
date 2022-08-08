#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    string A[N];

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if( ((A[i][j]=='W')&&(A[j][i]!='L'))||((A[i][j]=='L')&&(A[j][i]!='W'))||((A[i][j]=='D')&&(A[j][i]!='D'))){
                cout << "incorrect";
                return 0;
            }
        }
    }

    cout << "correct";

}