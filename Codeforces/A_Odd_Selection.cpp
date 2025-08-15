/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_289
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Feb-29 22:20:00
 * time end  :  2024-02-29  22:32:07
*/

#include <bits/stdc++.h> 
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main 
void somadan() {
    int n,x;
    cin>> n>> x;
 
    int odd_ct = 0, even_ct = 0;

    for(int i=0; i<n ; ++i) {
        int a; cin>> a; 
        a%2 ? odd_ct++ : even_ct++;
    }

    if(x == n ) {
        (odd_ct%2) ? cout << "Yes\n" : cout << "No\n";
        return;
    }

    if((odd_ct > 0 && x%2) || (odd_ct > 0 && even_ct > 0) ) {
        cout << "Yes\n";
        return;
    }

    cout << "No\n";
   
    
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
