/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_256
 * time start:  2024-02-18 00:27:26
 * time end  :  2024-02-18 00:36:04
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  ll a,b,c;
  cin >> a>> b>> c;

  (a>b || (a==b && c%2)) ? cout << "First\n" : cout << "Second\n";
}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
