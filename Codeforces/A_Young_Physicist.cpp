//SOE_28
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    int sum[] ={0,0,0};

    while(t--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sum[0] += a[0];
        sum[1] += a[1];
        sum[2] += a[2];
    }

    (sum[0] == 0 && sum[1] == 0 && sum[2] == 0) ? cout << "YES" << endl : cout << "NO" << endl;
}