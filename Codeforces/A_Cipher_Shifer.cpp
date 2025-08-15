/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_286
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  29-February-2024 01:18:33
 * time end  :  2024-02-29 01:21:26
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n = 1;
    cin >> n;
    string a; cin>> a;

    string ans = "";
    char temp = a[0];
    
    for(int i=1; i<n; ++i) {
        if(a[i] == temp) {
            ans += temp;
            temp = a[++i];
        }
    }
    cout << ans << endl;
    
    
    
    
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
