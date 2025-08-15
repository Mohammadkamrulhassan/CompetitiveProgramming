//SOE_58
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int main(void){
  int t; cin >> t;

  int max[] ={0,0} ; int min[] = {INT_MAX,0} ;
  for(int i=1; i<=t; ++i) { 
    int a; cin >> a;
    if(max[0] < a){ max[0] = a; max[1] = i; }
    if(min[0] >= a){ min[0] = a; min[1] = i; }
  }
  (max[1] > min[1]) ? cout << (t-min[1]) + (max[1] - 2) << endl : cout << (t-min[1]) + (max[1] - 1) << endl;

}