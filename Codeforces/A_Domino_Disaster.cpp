/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_325
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-19 13:09:51
 * time end  :  2024-03- 19 13:14:15
*/

#include<bits/stdc++.h>
using namespace std;

void faltu(void) {
    int n; cin>> n;

    string str; cin>> str;

    for(int i=0; i<n; ++i) {
        if(str[i] == 'U') cout << "D";
        else if(str[i] == 'D') cout << "U";
        else cout << str[i] ;
    }
    cout << '\n';
}

int main(void) {
    int tt; cin>> tt;
    while (tt--) {
        faltu();
    }
}