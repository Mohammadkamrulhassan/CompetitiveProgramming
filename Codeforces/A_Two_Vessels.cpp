//SOE_09
//02.01.2024

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int tt; cin>> tt;

    while (tt--) {
        int a,b,c; cin>> a>> b >> c;
        int diff; a>b ? diff = a-b : diff = b-a;
        diff % (2*c) == 0 ? cout << diff /(2*c) << endl : cout << (diff / (2*c) ) + 1 << endl;
    }
    
    return 0;
}