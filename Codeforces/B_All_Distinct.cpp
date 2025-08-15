/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_243
 * time start:  2024-02-16 23:44:58
 * time end  :  2024-02-16 23:48:26
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

  vector<int > v(n);
  for(int i=0; i<n; ++i) cin>> v[i];

  sort(all(v));

  int ct=0;

  for(int i=1; i<n; ++i) {
    if(v[i] == v[i-1]) {
        ct++;
    }
  }

  ct%2 ? cout << n - ct - 1 << endl : cout << n-ct << endl;
  

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
