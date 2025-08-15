/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_339
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-25 23:55:30
 * time end  :  2024-03- 26 00:06:30
*/

#include<bits/stdc++.h>
using namespace std;

void faltu(void) {
    int n; cin>>n;
    cout << n/10 + (bool) (n%10 == 9) << endl;
}

int main(void) {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    // freopen("in","r",stdin); freopen("out","w",stdout);

    int tt; cin>> tt;
    while(tt--) faltu();
}