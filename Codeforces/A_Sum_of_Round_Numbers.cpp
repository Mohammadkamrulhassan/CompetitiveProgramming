//SOE_85
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
void solve(){
	string n; cin>> n;int cnt =0;
	for(int i=0; i<n.size(); ++i) if(n[i] !='0')cnt++; cout << cnt << endl;

	for(int i=0; i<n.size(); ++i) if(n[i] !='0') cout << (int) ( n[i] -'0') * pow(10,(n.size()-i-1)) << ' '; cout <<endl;
}
int main(void){ int t; cin >> t; while(t--)solve(); }