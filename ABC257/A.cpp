#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,x;
    string s;
    cin >> n >> x;
    for(char a='A';a<='Z';) {
        for(int i=0;i<n;i++){
            s.push_back(a);
        }
        a+=1;
    }
    cout << s[x-1] << endl;
}