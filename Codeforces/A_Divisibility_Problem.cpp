//SOE_57
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int main(void){
  int t; cin >> t;
  while(t--){
    int num1,num2; cin >> num1 >> num2;
    if(num1 % num2 == 0) cout << 0 << endl;
    else cout << num2 - (num1 % num2) << endl;
  }
}