/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_244
 * time start:  2024-02-16 23:50:35
 * time end  :  2024-02-16 23:57:45
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

  yes(n>3 && !(n%4ll));
  

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
