//SOE_138
//06.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;

    while(tt--) {
        int a,b; cin>> a>> b;
        if(a == b) cout << "Bob\n";

        else if(a < b) {
            (b-a)%2 == 0 ? cout << "Bob\n" : cout << "Alice\n";
        } 
        else if(a > b) {
            (a-b)%2 == 0 ? cout << "Bob\n" : cout << "Alice\n";
        } 
    }

    return 0;
}
/*
1 4 a
3 1b
1 2a
1 1b
1 0a
0 0
*/
