/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_278
 * time start:  2024-02-27 01:04:18
 * time end  :  2024-02-27 01:31:46
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

// This function called by main
void somadan() {
    ll a,b,c,x,y;
    cin >> a>> b>> c>> x>>y; //1 1 4 2 3

    if(x>a) {
        c -= (x-a);
    }
    if(y>b) {
        c -= (y-b);
    }
    
    c>=0 ? cout << "YES\n" : cout << "NO\n";
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
