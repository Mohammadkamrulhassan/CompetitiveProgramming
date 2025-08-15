//SOE_110
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int n;cin>>n; vector<vector<int>> v(3);
	for(int i=0; i<n; ++i){ int x;cin>>x;v[x-1].push_back(i);}
	vector<int> cnt(3);cnt[0]= v[0].size();cnt[1]=v[1].size(); cnt[2]=v[2].size(); sort(cnt.begin(),cnt.end());cout << cnt[0] << endl;
	for(int i=0; i<cnt[0]; ++i){
		cout << v[0][i]+1 << ' '<< v[1][i]+1 << ' '<< v[2][i]+1 << endl;
	}
}