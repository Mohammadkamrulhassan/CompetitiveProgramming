/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_29
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-02 18:53:20
 * time end  :  2024-03 -02 18:55:18
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n = 1;
    cin >> n;
    
    set<int> st;
    int ct = 0, temp = -3;

    for(int i=0; i<n; ++i) {
        int x; cin>> x; 
        if(x == -1) ct++;
        else st.insert(x);
        
    }
    
    for(auto a : st) {
        if(a == -1) {
            continue;
        }
        if(abs(temp - a) > 1) ct++;
        temp = a;
    }

    for(auto a : st ) cout << a << ' ';
   
   cout << ct << '\n';
    
}


int main(void) { 
    int t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
/*
5
-1  1 2 1 -1
-1 -1 1 1  2

-1
1 1
2 -1

12
-1  1  2 3 -1 5 6 7 -1 9 10 11
-1 -1 -1 1  2 3 5 6  7 9 10 11 

*/