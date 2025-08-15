/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_312
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-15 00:43:24
 * time end  :  2024-03- 15 00:50:52
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
    int n; cin>> n;
    if(n== 0) {
        cout << "1\n";
        return 0;
    }
    switch(n%4) {
        case 1 : cout << "8\n";
            break;
        case 2 : cout << "4\n";
            break;
        case 3 : cout << "2\n";
            break; 
        case 0 : cout << "6\n";
        break;
    }

    /*
    1=8
    2=4
    3=2
    4=6
    5=8
    6=4
    7=2
    8=6
    9=8
    */
}