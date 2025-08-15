//SOE_84
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n; int k; cin>>n>>k; k =(60*4)-k; int temp=0;int cnt =0;

	for(int i=1; i<=n; ++i){
		temp += (i*5); if(temp > k)break; cnt++;
	}cout << cnt << endl; return 0;
}