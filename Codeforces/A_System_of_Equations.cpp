/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_313
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-15 00:58:38
 * time end  :  2024-03- 15 01:06:54
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int m,n; cin>>m>> n;
    
    int ct = 0;
    for(int a=0; a<=n; ++a) {
        for(int b=0; b<=m; ++b) {
            if(a*a+b == n && a+b*b == m) ct++;
        }
    }
    cout << ct << '\n';
}