/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_242
 * time start:  2024-02-16 23:22:01
 * time end  :  2024-02-16 23:40:18
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  string a; cin>> a;
  string str = "0abcdefgh";

  for(int i=1; i<=8; ++i) {
    if(a[1]-'0' != i) cout << a[0] << i << endl;
    if(a[0] != str[i]) cout << str[i] << a[1] << endl;
  }
  

}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}