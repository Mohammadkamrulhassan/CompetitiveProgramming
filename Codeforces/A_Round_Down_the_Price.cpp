/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_250
 * time start:  2024-02-17 02:10:35
 * time end  :  2024-02-17 02:26:40
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  string a; cin>> a;

  ll n = stoll(a);
  ll round = 1;
  for(int i=1; i<a.size(); ++i) {
    round *=10;
  }
  
  cout << n - round << endl;
  return;
}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
