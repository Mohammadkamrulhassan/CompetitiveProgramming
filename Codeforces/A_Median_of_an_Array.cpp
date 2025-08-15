/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_332
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-22 22:47:26
 * time end  :  2024-03- 22 23:10:39
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        int n; cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; ++i) cin>> v[i];

        sort(v.begin(),v.end());
        int index = 0;
        n%2 ? index = n/2+1 : index = n/2;

        int ans =0,temp = v[index-1]+1;
        for(int i=index-1; i<n; ++i) {
            if(v[i] < temp) ans += temp - v[i];
        }

        cout << ans << endl;
    }
}