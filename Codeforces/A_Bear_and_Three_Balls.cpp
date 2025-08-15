// BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
// Problem    : SOE_588  [A. Bear and Three Balls]  [Limit : 2000 ms]
// URL        : https://codeforces.com/problemset/problem/653/A
// time start : 2024-06-06 05:34:16  (GMT+06:00 Bangladesh Standard Time)

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    // freopen("i",r,stdin); freopen("o",w,stdout);
    
    int n; cin>> n;
    
    set<int> st;
    while(n--) {
        int x; cin>> x;
        st.insert(x);
    }
    
    
    for(auto i : st) {
        if(st.find(i+1) != st.end()  && st.find(i+2) != st.end()) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    return 0;
}
