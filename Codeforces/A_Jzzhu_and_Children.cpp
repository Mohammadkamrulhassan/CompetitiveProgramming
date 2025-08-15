/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_295
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-02 19:33:39
 * time end  :  2024-03 -02 19:47:30 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() { 
    int n,m;
    cin>> n>> m;
    int ans =0;
    int tem=0; 
    for(int i=0; i<n; ++i) {
        int x; cin>> x;
        if((x/m) + (bool) (x%m) == tem) {
            ans = i;
        }
        else if(x/m + (bool) (x%m) > tem) {
            ans = i;
            tem = x/m + (bool) (x%m);
        }
    }

   cout << ans + 1 << endl;
    
}


int main(void) { 
    int t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
