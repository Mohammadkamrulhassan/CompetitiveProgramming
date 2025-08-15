//SOE_50
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
void solve(void){
    string a; cin >> a;
    for(int size = 0; size < a.size() ;size++){ if(a[size] == 'H' || a[size] =='Q' || a[size] == '9') { cout << "YES" << endl; return;}   }
    cout << "NO" << endl; return;
}
int main(void){solve();}