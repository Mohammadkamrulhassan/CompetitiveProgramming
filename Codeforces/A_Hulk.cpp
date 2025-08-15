//SOE_54
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
  int a; cin >> a;
  for(int i=1; i<=a; ++i){ if(i%2 != 0)cout << "I hate "; else cout << "I love "; if(i== a) cout << "it "; else cout << "that ";}
}