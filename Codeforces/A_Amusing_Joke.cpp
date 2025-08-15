//SOE_76
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> v('Z'+1 ,0),v2('Z'+1 ,0); int test =1;
	string a[3]; cin >> a[0] >> a[1] >> a[2];

	for(int i=0; i<a[0].size(); ++i) v[a[0][i]]++;
	for(int i=0; i<a[1].size(); ++i) v[a[1][i]]++;

	for(int i=0; i<a[2].size(); ++i) v2[a[2][i]]++;

	for(int i='A'; i <= 'Z'; ++i){
		if(v[i] != v2[i]){  test = 0;break; }
	}
	test == 1 ? cout << "YES\n" : cout << "NO\n";
}