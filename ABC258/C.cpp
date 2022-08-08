#include<iostream>

using namespace std;
int n,q;
int a,b,p;
string s;
int shift = 0;


int main(){
    cin >> n >> q;
    cin >> s;
    for(int it=0;it<q;it++){
        cin >> a >> b;
        if(a==1){
            shift = (shift+b)%n;
        } else {
            p=(n+b-1-shift)%n;
            cout << s[p] << '\n';
        }
    }
}