//SOE_77
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int s,n; cin >> s >> n;vector<int> v(n);
	for(int i=0; i<n; ++i)cin>>v[i];
	sort(v.begin(),v.end());
	
	int ans =INT_MAX; int check =1;
	for(int i=0; i<n-s+1; ++i){
		if(v[i+s-1] - v[i] < ans) {ans = v[i+s-1] - v[i]; check = 0;}
	}
	check == 0 ? cout << ans <<endl : cout << 0 << endl;
}