/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_307
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-07 23:18:40
 * time end  :  2024-03- 08 00:33:37
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n,m;
    cin >> n>> m;
    
    vector<string > v(n);
    for(int i=0; i<n; ++i) {
        cin>> v[i];
    }
    int hi=0;
    for(int j=0; j<m; ++j) {
        for(int i=0; i<n; ++i) {
            // cout << i<< ' ' << j << v[i][j] ;
            if(hi == 0) {
                if(v[i][j] == 'v') {
                    hi++;
                    break;
                }
            }
            if(hi == 1) {
                if(v[i][j] == 'i') {
                    hi++;
                    break;
                }
            }
            if(hi == 2) {
                if(v[i][j] == 'k') {
                    hi++;
                    break;
                }
            }
            if(hi == 3) {
                if(v[i][j] == 'a'){
                    cout << "YES\n";
                    return;
                }
                
            }
        }
    }

   cout << "NO\n";
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
