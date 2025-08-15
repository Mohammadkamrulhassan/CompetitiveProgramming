/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_321
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-17 05:53:20
 * time end  :  2024-03- 18 00:26:19
*/

#include<bits/stdc++.h>
using namespace std;

void hi() {
    long long int m,n,x;
    cin>> n>>m>>x;

    long long int column = x/n + (bool) (x%n);
    long long int row = (x-((column-1)*n));

    cout << (row-1)*m + column << endl;
    
}
/* // 3 5 11
 1  4  7 10 13 
 2  5  8 11 14
 3  6  9 12 15 

 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
*/
int main(void) {
    int tt; cin>> tt;
    while(tt--) hi();
}