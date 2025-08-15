/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_290
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Feb-29 22:41:57
 * time end  :  2024-02-29  22:48:07
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n = 1;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; ++i) {
        cin>> v[i];
    }
    sort(all(v));
    

    vector<int> v2(n-1);

    for(int i=0; i<n-1; ++i) {
        cin>> v2[i];
    }
    sort(all(v2));

    for(int i=0; i<n; ++i) {
        if(v[i] != v2[i]) {
            cout << v[i] << endl;
            break;
        }
    }

    vector<int> v3(n-2);
    for(int i=0; i<n-2; ++i) {
        cin>> v3[i];
    }
    sort(all(v3));

    for(int i=0; i<n-1; ++i) {
        if(v3[i] != v2[i]) {
            cout << v2[i] << '\n';
            return;
        }
    }
   
    
}


int main(void) { 
    int t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
