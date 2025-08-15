/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_302
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-05 03:34:00
 * time end  :  2024-03- 05 03:56:16
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n,x;cin>>n>>x;

    int ct =0; 
    for(int i=1; i<=n; ++i) {
        if(x%i == 0 && x/i <= n) ct++;
    }
    cout << ct << '\n';
}

void somadan2() {
    int n,x;
    cin >> n >> x;

    int ct=0;
    for(int i=1; i<=n; ++i) {
        if((1ll*i*n) >= x*1ll && x%i == 0) { //right i*1ll*n =(i*1ll)*n // wrong i*n*1ll
            ct++;
        }
    }
 
   cout << ct << endl;
}
/*
 1  2  3  4  5  6
 2  4  6  8 10 12
 3  6  9 12 15 18
 4  8 12 16 20 24
 5 10 15 20 25 30
 6 12 18 24 30 36
*/

int main(void) { 
    int t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
