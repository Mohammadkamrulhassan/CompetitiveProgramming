/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_276
 * time start:  2024-02-26 01:15:34
 * time end  :  2024-02-26 01:35:53
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

// This function called by main
void somadan() {
    ll n = 1;
    cin >> n;

    string a; cin>> a;

    map<string , int> mp;

    for(int i=1; i<a.size(); ++i) {
        string temp = ""; temp += a[i-1]; temp += a[i];
        mp[temp] = 0;
    }
    for(int i=1; i<a.size(); ++i) {
        string temp = ""; temp += a[i-1];temp +=a[i];
        mp[temp] ++;
    }

    int ct =0;

    for(auto a: mp) {
        if(a.second != 0) {
            ct++;
        }
    }
  cout << ct << endl;
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
