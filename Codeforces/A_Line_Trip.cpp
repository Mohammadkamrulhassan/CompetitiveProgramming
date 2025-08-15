//SOE_89
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t; cin >> t;
	while(t--){
		int n,x,lo=0,max =0; cin>> n >> x;
		while(n--){  int a; cin>> a; if(a-lo > max) max = a-lo; lo =a; }
		if(2*(x-lo) > max) max = (x-lo)*2; cout << max << endl;
	}
}