//SOE_16
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    string a; cin >> a;

    if(a[0] >= 'a' && a[0] <= 'z') a[0] = a[0] + 'A' - 'a' ;
    cout << a << endl;
}