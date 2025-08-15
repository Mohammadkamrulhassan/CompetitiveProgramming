//SOE_13
//02.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int v[6][6]; int r=0,c=0;
    for(int i=1; i<6; ++i) {
        for(int j=1; j<6; ++j) {
            cin>> v[i][j];
            if(v[i][j]) { r=i;c=j; }
        }
    }
    r -= 3;if(r<0)r = (-r); c -=3; if(c<0) c =(-c);
    cout << r+c << endl;
}