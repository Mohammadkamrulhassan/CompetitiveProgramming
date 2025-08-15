/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_292
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-01 20:36:37
 * time end  :  2024-03 -01 21:04:50
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

    for(int i=0; i<n; ++i) cin>> v[i];

    sort(all(v));


    ll sum =0;
    sum += abs(v[0]-v[n-2]);
    sum += abs(v[n-2] - v[1]);
    sum += abs(v[1]-v[n-1]);
    sum += abs(v[n-1] - v[0]);
    cout << sum << endl;
    
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}