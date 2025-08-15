/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_259
 * time start:  2024-02-19 20:37:14
 * time end  :  2024-02-19 20:40:52
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  ll n = 1;
  // cin >> n;
  string a;
  cin>>a;
  int ctA =0,ctB=0;

  for(int i=0; i<a.size(); ++i) {
    a[i] == 'A' ? ctA++ : ctB++;
  }
  if(ctA==ctB) {
    cout << a[0] << endl;
    return;
  }

  ctA > ctB ? cout << "A\n" : cout << "B\n";

  
}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}
