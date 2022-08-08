#include<iostream>
#include<set>
using namespace std;

int main(){
    int N,X,Y,Z;
    set<int> ans;
    cin >> N >> X >> Y >> Z;
    int A[N+2],B[N+2],nilaisiapa;
    bool pass[N+2];

    for(int i=1;i<=N;i++){
        cin >> A[i];
        pass[i]=false;
    }    
    for(int i=1;i<=N;i++){
        cin >> B[i];
    }

    int highest;
    for(int i=1;i<=X;i++){
        highest=-1;
        nilaisiapa=0;
        for(int j=1;j<=N;j++){
            if((A[j]>highest)&&(pass[j]==false)){
                highest=A[j];
                nilaisiapa=j;
            }
        }
        pass[nilaisiapa]=true;
        ans.insert(nilaisiapa);
    }

    for(int i=1;i<=Y;i++){
        highest=-1;
        nilaisiapa=0;
        for(int j=1;j<=N;j++){
            if((B[j]>highest)&&(pass[j]==false)){
                highest=B[j];
                nilaisiapa=j;
            }
        }
        pass[nilaisiapa]=true;
        ans.insert(nilaisiapa);
    }    

    for(int i=1;i<=Z;i++){
        highest=-1;
        nilaisiapa=0;
        for(int j=1;j<=N;j++){
            if((A[j]+B[j]>highest)&&(pass[j]==false)){
                highest=A[j]+B[j];
                nilaisiapa=j;
            }
        }
        pass[nilaisiapa]=true;
        ans.insert(nilaisiapa);
    }

    for(auto it=ans.begin();it!=ans.end();it++){
        cout << *it << endl;
    }
}