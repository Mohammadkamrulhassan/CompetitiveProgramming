//SOE_56
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n; cin >> n;
  int a[n]; for(int i=0 ; i<n; ++i) a[i] = 0;

  int b;cin >> b; 
  for(int i=0 ; i<b; ++i){ int t;cin >> t; a[t-1]++; }

  int c; cin >> c;
  for(int i=0 ; i<c; ++i){ int t; cin >> t; a[t-1]++; }

  int test = 1;
  for(int i=0 ; i<n; ++i) {if(a[i] == 0){test = 0;}}
  
  if(test == 0){ cout << "Oh, my keyboard!"<< endl;}
  else{cout << "I become the guy." << endl;}
}