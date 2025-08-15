/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_257
 * time start:  2024-02-18 19:25:48
 * time end  :  2024-02-18 19:29:42
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
    ll n; string a;
    cin>> n >> a;
    ll ct =0;

    for(int i=1; i<n; ++i) {
        if(a[i] == '@') ct++;

        if(a[i] == '*' && a[i-1] == '*') {
            break;
        }
    }
    cout << ct << endl;
  
}

int main(void) { 
  ll t = 1; 
  cin >> t; 
  while(t--) somadan();
}