#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> X;
    int N;
    cin >> N;
    string S[N],res[N];

    for(int i=0;i<N;i++){
        cin >> S[i];
        X.insert(pair<string,int>(S[i],0));
    }
    for(int i=0;i<N;i++){
        if(X[S[i]]>0){
            cout << S[i] << "(" << X[S[i]] << ")" << endl;
        } else {
            cout << S[i] << endl;
        }
        X[S[i]]++;
    }
}