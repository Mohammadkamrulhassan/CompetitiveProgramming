//SOE_115
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std; int main(void) { int n; cin>> n; if(n>=0)cout << n;
	else{
		n/10 > (n/100)*10+n%10 ? cout << n/10 : cout << (n/100)*10+n%10;
	}
}