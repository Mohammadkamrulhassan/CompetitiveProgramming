/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *           :  SOE_270
 * time start:  2024-02-25 00:00:39
 * time end  :  2024-02-25 00:07:12
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

    string a,b; cin>> a>> b;

    int ans =0;

    for(int i=0; i<n; ++i) {
        int temp = abs (a[i]-b[i]);
        ans += min(temp,10-temp);
    }
    cout << ans << endl;
  
}

int main(void) { 
    ll t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
