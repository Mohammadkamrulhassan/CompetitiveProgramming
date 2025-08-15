//SOE_104
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
void solve(void){
	int n; cin>> n; vector<int> v(n);cin>> v[0] >> v[1]>>v[2]; int a=0;
	if (v[0] == v[1]) a =v[0]; else if (v[1] == v[2]) a =v[1]; else if (v[2] == v[0]) a =v[0];
	for(int i=0;i<3; ++i) if(a != v[i]) cout<< i+1 << endl; 
	for(int i=3; i<n; ++i) { cin>> v[i]; if(a != v[i]) cout<< i+1 << endl; }
}
int main(void){
	int t; cin>> t; while(t--)solve();
}