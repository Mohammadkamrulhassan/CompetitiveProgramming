//SOE_127
//03.01.2024
 
#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int x;cin>>x; int i = 1, ans = 1 ; 
	while(x > 0) {
	 i *=2;
	 if(x < i ) { 
	 	x = x- i/2; i =1;
	 	if(x != 0) ans++;
	 }
	}
	cout << ans << endl;
}