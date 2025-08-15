//SOE_92
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n,k,l,c,d,p,nl,np; cin >> n >> k>> l>> c >> d>> p>> nl>> np;
	vector<int> v;v.push_back((k*l)/(nl*n));v.push_back((c*d)/n);v.push_back((p/np)/n);
	cout << *min_element(v.begin(),v.end());
}