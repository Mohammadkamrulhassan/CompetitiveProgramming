//SOE_114
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int t;cin>>t;while(t--){
		int n; cin>> n; if(n%4!=0)cout<< "NO\n";
		else {
			cout << "YES\n";
			for(int i=2; i<n+1; i+=2)cout << i<<' ';
			for(int i=1; i<n; i+=2) i==n-1 ? cout << i+n/2<<" " : cout << i<<" " ;
			cout << endl;
		}
	}
}