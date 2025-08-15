//SOE_98
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin>>n; string s; cin>> s;int cnt=0;int a=0;
	for(int i=0; i<n; i++){
		if(s[i]== 'A') a++;
		else{
			if(a){
				cnt +=a;
				a=1;
			}
		}
	}
	cout << cnt << endl;
	
}

int main(void){
	int t; cin >> t; while(t--)solve();
}