//SOE_111
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int t; cin>> t;
	while(t--) {
		string b;cin>> b;string a;a+=b[0];
		for(int i=1,j=1; i<b.size(); i+=2) a+=b[i];
		cout << a << endl;
	}
}