//SOE_103
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std; int main(void){
	int t;cin>> t; 
	while(t--){
		int n;cin>> n;vector<int> v(n); for(int i=0;i<n;++i)cin>> v[i];
		sort(v.begin(),v.end());
		bool test =true;
		for(int i=1;i<n;++i){
			if(v[i]-v[i-1]>1){test=false;break;}
		}
		test ? cout << "YES\n" : cout << "NO\n";
	}
}