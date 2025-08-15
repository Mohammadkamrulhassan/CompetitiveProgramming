//SOE_107
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n; cin>> n; vector<int> v(n); for(int i=0; i<n; ++i) cin>> v[i]; int cnt =0;
	for(int i=0; i<n; ++i) cnt += (*max_element(v.begin(),v.end())) -v[i];
	cout << cnt << endl;
}