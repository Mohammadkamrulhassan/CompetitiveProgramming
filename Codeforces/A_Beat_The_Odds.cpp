/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_331
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-19 13:21:26
 * time end  :  2024-03- 21 19:40:47
*/

#include<bits/stdc++.h>
using namespace std;

void faltu() {
    int n; cin>> n;
    int odd=0,even =0;
    while(n--) {
        int x; cin>>x;
        x%2 ? odd++ : even++;
    }
    cout << min(odd,even) << '\n';
}

int main(void) {
    ios_base:: sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int tt; cin>> tt;

    while(tt--) {
        faltu();
    }
}