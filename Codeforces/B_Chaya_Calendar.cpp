/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_258
 * time start:  
 * time end  :  2024-02-18 23:00:43
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

  ll ans; cin>> ans;

  while(--n) {
    ll x; cin>> x;
    ans = ((ll) (ans/x)+1)*x;

  }

  cout << ans << endl;
  
}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}