//SOE_75
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

void solve(){int x;cin>>x; x<2 ? cout<<0<<endl : x%2!=0 ? cout<<x/2<<endl : cout<<x/2-1<<endl; }

int main(void){ int t; cin >> t; while(t--)solve(); }