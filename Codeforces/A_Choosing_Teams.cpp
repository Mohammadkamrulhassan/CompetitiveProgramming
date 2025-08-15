//SOE_108
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int n,k,cnt=0;cin >> n >> k; vector<int> v(n); for(int i=0; i<n; ++i) cin>> v[i]; sort(v.begin(),v.end());
	for(int i=2; i<n; i+=3)  if(v[i]+k <= 5)cnt++; cout << cnt << endl;
}