//SOE_88
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int k; int n; cin >> k >> n;
	for(int i=1; ; ++i) if((i*k)%10 == n || (i*k)%10 == 0){ cout << i << endl; break;}
}