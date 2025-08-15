/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_236
 * time start:  2024-02-16 11:19:36
 * time end  :  2024-02-16 12:17:02
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
    // INPUT
    ll a,b,c;
    cin>> a>> b>> c;

    cout << max((max(b,c)-a+1),0ll) << ' ' << max(max(a,c)-b+1,0ll) << ' ' << max(max(a,b)-c+1,0ll) <<'\n';

    // OUTPUT
    

}


int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
