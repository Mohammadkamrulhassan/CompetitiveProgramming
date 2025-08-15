//SOE_04
//02.01.2024

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int a,b,c,x,y; cin >> a >> b >> c; 
  
    a%c == 0 ? x=a/c : x=(a/c)+1;
    
    b%c==0 ? y=b/c : y=(b/c)+1;
    
    cout << x * y << endl;
    return 0;
}