//SOE_59
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int main(void){
  int a,b,c; cin>> a >> b >> c; int max =0;
  vector <int> v;
  v.push_back(a+b+c); v.push_back(a+(b*c)); v.push_back((a+b)*c); v.push_back((a*b)+c); v.push_back(a*(b+c)); v.push_back(a*b*c);
  for(int i=0; i < v.size(); ++i) if(max < v[i]) max = v[i]; 
  cout << max << endl;
}