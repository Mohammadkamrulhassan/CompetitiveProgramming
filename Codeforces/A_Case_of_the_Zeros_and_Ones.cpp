/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_263
 * time start:  2024-02-21 22:40:52
 * time end  :  2024-02-21 23:00:57
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  ll n = 1;
  string a;
  cin >> n>> a;
  int ct_1 = 0, ct_0 =0;

  for(int i=0; i<n; ++i) {
    if(a[i]=='0') ct_0++;
    else ct_1 ++;
  }
//   cout << ct_1 << ' ' << ct_0 << endl;
  cout << abs(ct_1-ct_0) << '\n';
  
}

int main(void) { 
  ll t = 1; 
//   cin >> t; 
  while(t--) somadan();
}
