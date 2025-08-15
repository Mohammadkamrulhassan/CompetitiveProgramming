/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_245
 * time start:  2024-02-17 00:05:31
 * time end  :  2024-02-17 00:20:20
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  string a; char b; cin>> a>>b;

  for(int i=0; i<a.size(); ++i) {
    if(a[i] == b && !(i%2)  ){
        cout << "YES\n";
        return;
    }
  }
  cout << "NO\n";
  

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
