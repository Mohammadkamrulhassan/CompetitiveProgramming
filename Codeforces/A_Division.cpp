//SOE_118
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int t;cin>> t; while(t--) {
		int x; cin>>x;
		if(x<=1399) cout << "Division 4\n";
		else if(x<=1599) cout << "Division 3\n";
		else if(x<=1899) cout << "Division 2\n";
		else cout << "Division 1\n";
	}
}