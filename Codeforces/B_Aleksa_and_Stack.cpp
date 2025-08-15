//SOE_64
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

void solve(void){
    int n; cin >> n; int cnt =2;
    if(n> 2) cout << "1 3 ";
    for(int i=5; cnt<n; ++i){
        if((3*i)% ((i-1)*(i-2)) != 0){
            cout << i<< ' ';cnt++;
        }
    }cout << endl;
}

int main(void){
    int t; cin >> t;
    while(t--) solve();
}