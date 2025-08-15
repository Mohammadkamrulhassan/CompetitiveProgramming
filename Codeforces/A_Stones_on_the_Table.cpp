//SOE_19
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;

    string a; cin >> a;

    int cnt = 0; for(int i=0 ; i< a.size()-1 ; i++) if(a[i] == a[i+1]) cnt++; 

    cout << cnt << endl;
}
