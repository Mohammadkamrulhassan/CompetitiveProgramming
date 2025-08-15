//SOE_83
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n; cin>> n;
	int max=0;cin>>max; int min =max; int cnt =0;
	for(int i=1; i<n; ++i){
		int x; cin >> x;
		if(x > max) {cnt++; max=x;}
		else if(x < min) {cnt++; min=x;}
	}cout << cnt << endl;

}