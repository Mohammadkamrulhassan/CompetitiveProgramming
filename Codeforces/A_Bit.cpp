//SOE_12
//02.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt; int x=0;
    while(tt--) {
        string str; cin>> str;
        (str == "X++" || str =="++X") ? x++ : x--;
    } cout << x << '\n';
}