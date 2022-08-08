#include<iostream>
#include<map>
using namespace std;

int main(){
    string S;
    cin >> S;
    map<char, int> count;
    
    for(int i=0;i<3;i++){
        count[S[i]]=0;
    }

    for(int i=0;i<3;i++){
        count[S[i]]+=1;
    }
    for(int i=0;i<3;i++){
        if(count[S[i]]==1){
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}