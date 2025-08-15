//SOE_33
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b; cin >> a >> b;
    reverse(a.begin(),a.end());

    a==b ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}