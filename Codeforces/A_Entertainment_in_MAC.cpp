/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_305
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-05 20:40:29
 * time end  :  2024-03- 05 20:51:03
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n = 1;
    cin >> n;
    
    string a;
    cin>> a;

    set<string> st;
    st.insert(a);
    string b= a;
    reverse(all(b));
    // st.insert(b);
    string c = b+a;
    st.insert(c);
    
    // auto it = st.begin();
    for(auto str: st) {
        cout << str << endl;
        return;
    }
   
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
