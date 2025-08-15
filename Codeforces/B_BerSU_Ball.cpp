//SOE_158
//14.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n;cin>> n;
    vector <int> boys(n);
    for(int i=0; i<n; ++i) cin >> boys[i]; sort(boys.begin(),boys.end());

    int m;cin>> m;
    vector <int> girls(m);
    for(int i=0; i<m; ++i) cin >> girls[i]; sort(girls.begin(),girls.end());

    stack<int> st;
    for(int i=n-1; i>=0; --i) {
        st.push(boys[i]);
    }
    int cnt =0;
    for(int i=0; i<m; ++i) {
        if(st.top() - girls[i] == 0 || st.top() - girls[i] == 1 || st.top() - girls[i] == -1) {
            cnt++;st.pop();
        }
        else if(girls[i] > st.top()) {
            st.pop();--i;
        }
        if(st.empty()) break;
    }cout << cnt <<'\n';

    return 0;
}