/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_248
 * time start:  2024-02-17 01:12:46
 * time end  :  2024-02-17 01:32:11
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  string a,b; cin>> a >> b;

  int j=0;

  for(int i=0; i< b.size(); ++i) {
    if(a[j] == b[i]){
        j++;
    }
  }
  cout << j+1 << endl;
  

}

int main(void) { 
  ll t = 1; 
//   cin >> t; 
  while(t--) somadan();
}
