//SOE_80
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
// int main(void){
// 	int m,n; cin >> m >> n; int temp =1; int cnt =0;
// 	for(int i=0; i<m; ++i){ if(i%2 ==0)cnt++;
// 		for(int j=0; j<n; ++j){
// 			if(i%2 == 0 ) cout << "#";
// 			else{
// 				if(cnt%2 == 0 && j == 0) cout << "#" ;
// 				else if(cnt%2 == 1 && j == n-1)cout << "#" ;
// 				else cout <<".";
// 			}
// 		}
// 		cout << endl;
// 	}
// }
int ch=0;
int main(void){
	int n,m; cin>> n>> m; string a,b,c;
	for(int j=0; j<m; ++j) {a+= "#"; b+=".";c +="."; }
	b[m-1] ='#'; c[0] ='#';
	for(int i=0; i<n; ++i){
		if(i%2 ==0){
			cout << a<< endl;
		}
		else {
			if(ch==0){ cout << b<< endl; ch=1; }
			else {cout << c<< endl;ch=0; }
		}
	}
}