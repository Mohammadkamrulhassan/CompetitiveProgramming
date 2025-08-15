/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_253
 * time start:  2024-02-17 13:18:58
 * time end  :  2024-02-17 18:58:29
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
  ll odd =0,even =0,oddMn=0;
  while(n--) {
    ll x; cin>> x;

    x%2 ? odd += x,oddMn = min(oddMn,x) : even += x;
  }
  yes(even>odd);
}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
