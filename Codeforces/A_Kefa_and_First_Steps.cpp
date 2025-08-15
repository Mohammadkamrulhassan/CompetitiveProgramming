//SOE_65
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n; cin >> n;
	vector<int > v;	int a; cin >>a; v.push_back(a);
	vector<int > ans; int cnt =1;

	for(int i=1; i<n; ++i){
		int x; cin >> x; v.push_back(x);
		if(x < v[i-1] ) {ans.push_back(cnt); cnt = 1;}
		else if(i == n-1){cnt++;ans.push_back(cnt); }
		else cnt++;
	}
	n <= 1 ? cout << cnt : cout << *max_element(ans.begin(), ans.end()) << endl;
}