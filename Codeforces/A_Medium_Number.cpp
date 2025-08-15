//SOW_130
//04.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;

    while(tt--) {
        vector<int> v(3); cin>> v[0] >> v[1] >> v[2]; sort(v.begin(),v.end()); cout << v[1] << '\n';
    }
}