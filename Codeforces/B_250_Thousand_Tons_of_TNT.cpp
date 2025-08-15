#include<bits/stdc++.h>
using namespace std;

int main(void){
	vector<int> v;
	for(int i=0; i<15; ++i){
		int x; cin >> x; v.push_back(x);
	}
	sort(v.begin(), v.end());
	cout << v[14] - v[0];
}
