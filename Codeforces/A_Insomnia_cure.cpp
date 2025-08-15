//SOE_61
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int v[1000000]; int cnt =0;
int main(){
  
  int a,b,c,d,t; cin >> a >> b >> c >> d >> t;
  
  for(int i = a; i<=t; i +=a){
    v[i] = 1;
  }
  for(int i=b; i<=t; i +=b){
    v[i] = 1;
  }
  for(int i=c; i<=t; i +=c){
    v[i] = 1;
  }
  for(int i=d; i<=t; i +=d){
    v[i] = 1;
  }
  int cnt =0;
  for(int i=1; i<=t; ++i){
    if(v[i] !=0)cnt++;
  }

  cout << cnt << endl;  

}