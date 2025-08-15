/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_261
 * time start:  2024-02-19 23:50:24
 * time end  :  2024-02-20 00:55:30
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  int n = 1;
  cin >> n;

  if(!(n%7)) {
    cout << n << endl;
    return;
  }
  else {
    n-=n%10;
    while(n%7 != 0) {
      n++;
    }
    cout << n << endl;
  }

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
