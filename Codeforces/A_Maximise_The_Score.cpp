/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_255
 * time start:  2024-02-17 23:02:33
 * time end  :  2024-02-17 23:08:56
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  ll n = 1;
  cin >> n;

  vector<ll> v(2*n);
  for(int i=0; i<2*n; ++i) cin>> v[i];

  sort(all(v));

  ll ans =0;

  for(int i=0; i<2*n; ++i) {
    ans += v[i++];
  }
  cout << ans << endl;
  
}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
