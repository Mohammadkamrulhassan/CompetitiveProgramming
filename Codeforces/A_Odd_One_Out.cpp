//SOE_122
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int tt;cin>>tt;
	while(tt--) {
		int x,y,z;cin>> x>> y>> z;
		if(x==y) cout << z << endl;
		else if(x==z) cout << y << endl;
		else if(y==z) cout << x << endl;
	}
}