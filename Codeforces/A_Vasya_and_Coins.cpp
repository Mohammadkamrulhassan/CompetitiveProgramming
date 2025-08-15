/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_237
 * time start:  2024-02-16 12:40:09
 * time end  :  2024-02-16 13:00:15
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  // INPUT
  ll a,b;
  cin >> a>>b;

  // IMPLIMENT && OUTPUT
  a ? cout << a+2*b +1 <<endl : cout << 1 << endl; 
    

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
