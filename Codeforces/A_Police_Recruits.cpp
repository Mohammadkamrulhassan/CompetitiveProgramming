//SOE_82
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n; cin>> n;
	int p=0; int cnt =0;
	for(int i=0; i<n; ++i){
		int x; cin >> x;
		if(p==0 && x== -1) cnt++;
		else if(x != -1 ) p +=x;
		else if (x == -1) p--;
	}cout << cnt << endl;

}