/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_246
 * time start:  2024-02-17 00:20:48
 * time end  :  2024-02-17 00:50:57
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  ll x,y,z; 
  cin>> x>> y >> z;
  if(x>y) swap(x,y);
  if(y>z) swap(y,z);
  if(x>z) swap(x,z);
  if(x>y) swap(x,y);

  if(x == y && y == z) {
    cout << "YES\n" << x << ' ' << y << ' ' << z <<'\n';
    return;
  }
  else if(y == z) {
    cout << "YES\n" << z << " " << x << ' ' << "1\n";
  }
  else {
    cout << "NO\n";
  }
  

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
