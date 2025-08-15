/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_268
 * time start:  2024-02-24 00:12:35
 * time end  :  2024-02-24 00:23:59
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
    bool start = false;
    int ans =0,start_index = 0,end_index = 0;
    vector<int> v(n);

    for(int i=0; i<n; ++i) {
        cin>>v[i];
        if(v[i] == 1 && !start) {
            start = true;
            start_index = i;
        }
        if(v[i] == 1 && start) {
            end_index = i;
        }
    }

    
    for(int i=start_index+1; i< end_index; ++i) {
        if(v[i] == 0) ans ++;
    }

    cout << ans << endl;
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
