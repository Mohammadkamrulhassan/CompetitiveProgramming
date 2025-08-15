//SOE_152
//12.01.2024

#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin>> n;
    int power=1;
    for(int i=1; i<n; ++i) {
        power += pow(2,i);
        if(n%power == 0) {
            cout << n/power << endl;
            return;
        }
    }
}

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        solve();
    }

    return 0;
}

// x(1+2+2^2...) = N
//x= n/(sum)

//20 20/2 10
//21 21/2 =10 root 10 =3-1
//18 18/2 =9  root  9 =3
// sum = (int) 2^sqrt(n)-1

// 1 2 4 8 16 32  64
// 1 3 7 15 31 63