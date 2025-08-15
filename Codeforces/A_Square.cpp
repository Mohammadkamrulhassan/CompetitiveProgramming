//SOE_164
//15.01.2024

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,temp,te=1;
    for(int i=0; i<4; ++i) {
        cin>> x >> y;
        if(i==0) temp = x;
        else if(temp != x && te) {temp = abs(temp-x);te = 0;}
    }
    cout << temp*temp << endl;
}

int main(void) {
    int tt; cin>>tt;
    while(tt--) solve();

    return 0;
}