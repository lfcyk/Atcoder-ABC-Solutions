#include<iostream>
using namespace std;
 
int main(){
  int L1,R1,L2,R2;
  cin >> L1 >> R1 >> L2 >> R2;
  int l = min(R1,R2) - max(L1,L2);
  if(l>=0){
      cout << l;
  } else {
      cout << "0";
  }
}