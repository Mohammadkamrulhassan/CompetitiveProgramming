/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_279
 * time start:  2024-02-27 01:42:20
 * time end  :  2024-02-27 01:48:22
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

// This function called by main
void somadan() {
    int n = 1; 
    cin >> n;
    
    // cout << "2 " << n-1 << endl;
    cout << (n-1)/2 << ' ' << n-1 << '\n';
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
