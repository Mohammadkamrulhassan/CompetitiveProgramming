//SOE_71
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n; cin >> n;
	int odd =0; int even =0;
	vector<int> v(n);
	for(int i=0; i<n; ++i) cin >> v[i];

	if((v[0]%2+v[1]%2+v[2]%2)>=2) {for(int i=0;i<n;++i){if(v[i]%2==0){cout<<i+1 ;break;}} }
	else for(int i=0; i<n; ++i){if(v[i]%2 == 1){ cout << i+1;break; }}
}