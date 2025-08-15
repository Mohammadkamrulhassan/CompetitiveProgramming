//SOE_116
//03.01.2024
 
#include <bits/stdc++.h>
using namespace std; int main(void) { int t; cin>> t; int m=0;int c=0; while(t--){ int x,y; cin>> x >>y; if(x>y) ++m;else if(x<y) ++c;  } if(m==c) cout << "Friendship is magic!^^" << endl; else if(c>m) cout << "Chris" << endl; else cout <<  "Mishka" << endl; }