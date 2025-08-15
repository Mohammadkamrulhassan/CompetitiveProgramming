/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_285
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  28-February-2024 02:16:45
 * time end  :  2024-02-28 02:29:34
*/

#include <bits/stdc++.h>

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    std :: string str;
    std :: cin >> str;

    int ct =0;

    for(int i=0; i<str.size(); ++i) {
        for(int j=i+1; j<str.size(); ++j) {
            for(int k=j+1; k<str.size(); ++k) {
                if(str[i] == 'Q' && str[j] == 'A' && str[k] == 'Q') ct++;
            }           
        }
    }

    std :: cout << ct << '\n';
  
}

int main(void) { 
    ll t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
