/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_282
 * time start:  28-February-2024 01:14:27 GTM+06:00 BST
 * time end  :  2024-02-28 01:20:42
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


void somadan() {  // This function called by main
    int n = 1;
    cin >> n;
    
    vector<int> v(n);

    ll sum =0;

    for(int i=0; i<n; ++i) {
        cin>> v[i];
        sum += v[i];
    }

    ll avg = sum/n;

    if(sum%n != 0) {
        cout << "-1\n";
        return;
    }

    int ct =0;
    for(int i=0; i<n; ++i) {
        if(v[i]>avg) ct++;
    }

    cout << ct << endl;

}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
