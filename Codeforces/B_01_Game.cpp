/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_274
 * time start:  2024-02-25 23:52:23
 * time end  :  2024-02-26 00:03:38
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

// This function called by main
void somadan() {
    string a; cin>> a;

    bool da = false;

    again :
    for(int i=1; i<a.size(); ++i) {
        if(a[i-1] != a[i]) {
            da = !da;
            a.erase(a.begin()+i-1);
            a.erase(a.begin()+i-1);
            goto again;
        }
    }
    da ? cout << "DA\n" : cout << "NET\n";
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
