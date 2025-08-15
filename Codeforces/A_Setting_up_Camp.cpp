/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_326
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-19 14:13:09
 * time end  :  2024-03- 19 16:32:39
*/

#include<bits/stdc++.h>
using namespace std;

void faltu() {
    int a,b,c; cin>> a>> b>>c;

    if((b%3==2 && c == 0 )) {
 // if((b%2==2 && c == 0 )) {
        cout << "-1\n";
        return;
    }
    if(b%3 == 1 && c < 2) {
        cout << "-1\n";
        return; 
    }
    cout << a + ((b+c)/3) + (bool) ((b+c)%3) << '\n';
}

int main(void) {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int tt; cin>> tt;
    while(tt--) faltu();
}