// SOE_143
// 11.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>> n >> m;
    bool test = true;
    for(int i=n+1; i<=m; ++i) {
        for(int j=2; j<i; ++j) {
            if(i % j == 0) {
                test = false; 
                break;
            }
        }
        if(test) {
            if(i == m) {
                cout << "YES\n";
                return 0; 
            }
            else {
                cout << "NO\n";
                return 0;    
            }
        }
        test = 1; 
    }
    cout << "NO\n";
}