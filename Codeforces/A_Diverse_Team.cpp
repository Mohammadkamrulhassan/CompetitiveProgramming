/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_328
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-20 23:48:59
 * time end  :  2024-03- 21 00:05:46
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0), cin.tie(0),cout.tie(0);
    int n,k; cin>>n >> k;

    set<int> st;
    map<int,int> mp;
    for(int i=0; i<n; ++i) {
        int x; cin>> x; 
        st.insert(x);
        mp[x] = i+1;
    }
    if(st.size() < k) {
        cout << "NO\n";
        return 0;
    }
    else {
        cout << "YES\n";
        int i=0;
        for(auto a: st) {
            cout << mp[a] << ' ';
            i++;
            if(i>=k) {
                break;
            }
        }
    }
}