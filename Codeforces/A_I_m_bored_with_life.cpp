/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_308
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-13 11:43:04
 * time end  :  2024-03- 13 11:50:24
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int a,b; 
    cin>> a>> b;

    long long int ans = 1;
    a = min(a,b);
    
    while(a>1) {
        ans *= a;
        a--;
    }
    cout << ans << endl;
}