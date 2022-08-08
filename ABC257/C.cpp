#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    int ans=0;
    string s;
    cin >> n >> s;
    pair<int,char> a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second=s[i];
        if(s[i]=='1'){
            ans+=1;
        }
    }
    
    sort(a,a+n);
    int anstmp=ans;
    for(int i=0;i<n;i++){
        if(a[i].second=='1'){
            anstmp--;
        } else {
            anstmp++;
        }
        if(a[i].first==a[i+1].first){
            continue;
        }
        ans = max(anstmp,ans);
    }
    cout << ans;
}