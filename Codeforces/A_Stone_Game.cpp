/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_241
 * time start:  2024-02-16 22:20:08
 * time end  :  2024-02-16 23:09:22
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

  ll mx = -1,mxi = -1,mn=200,mni=-1;
  
  for(int i=1; i<n+1; ++i) {
    ll x; cin>> x;

    if(mx < x) { mxi = i; mx=x; }
    if(mn > x) { mni = i; mn=x; }
  }

  ll x = min(mxi,mni), y = max(mxi,mni);

  (x<(n+1-y)) ? cout << x + min((n+1-y),y-x) << endl : cout << (n+1-y) + min(x,y-x) << endl;

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
