/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_266
 * time start:  2024-02-22 01:33:19
 * time end  :  2024-02-22 01:40:08
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
    ll n = 1;
    string a;
    cin >> n >> a;
    
    int first_index = -1,last_index = -1;

    for(int i=0; i<n; ++i) {
        if(a[i] == 'B' && first_index == -1) {
            first_index = i;
        }
        else if (a[i] == 'B') {
            last_index = i;
        }
    }
    if(first_index == -1 ) {cout << "0\n"; return;}
    else if (last_index == -1) { cout << "1\n"; return;}
    else {
        cout << last_index - first_index + 1 << endl;
    }
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
