/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_235
 * time start:  2024-02-16 11:10:35
 * time end  :  2024-02-16 11:17:00
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
    // INPUT
    ll n = 1;
    string str;

    cin >> n>> str;


    // IMPLIMENT
    int temp_ct=0,ans =0;

    for(int i=0; i<n; ++i) {
        if(str[i] == 'x') {
            temp_ct ++;
            if(temp_ct > 2) {
                ans++;
            }
        }
        else 
            temp_ct = 0;
    }

    // OUTPUT
    cout << ans << endl;

}

void somadan2() {
    // INPUT
    ll n = 1;
    cin >> n;

    // IMPLIMENT

    // OUTPUT
    

}

int main(void) { 
    ll t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
