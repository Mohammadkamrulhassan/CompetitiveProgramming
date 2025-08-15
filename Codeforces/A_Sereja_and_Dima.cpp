//SOE_97
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n; cin >> n; int p1=0;int p2=0;vector<int> v(n);
	for(int i=0; i<n; ++i)cin>> v[i];
	for(int i=0,j=n-1,k=0; k<n; ++k){
		if(k%2 ==0) {(v[i]<v[j]) ? p1 +=v[j--] : p1 +=v[i++];} else {(v[i]<v[j]) ? p2 +=v[j--] : p2 +=v[i++];}
	} cout << p1 << ' ' << p2 << endl;
}