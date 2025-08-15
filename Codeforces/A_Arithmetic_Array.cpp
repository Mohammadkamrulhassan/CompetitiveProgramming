/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_239
 * time start:  2024-02-16 21:26:49
 * time end  :  2024-02-16 21:32:33
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

  vector <ll> v(n);
  ll sum =0;
  for(int i=0; i<n; ++i) {
    cin>> v[i];
    sum += v[i];
  }

  if(sum < n) {
    cout << "1\n";
  }
  else {
    cout << sum - n << endl;
  }
  

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
