//SOE_120
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

int main(void) {
	int tt; cin>> tt;

	while(tt--) {
		int n; cin>> n;
		string str; cin>> str;
		vector<int> v('Z'+1,0);

		for(int i=0; i<str.size(); ++i) v[str[i]]++;
		int cnt=0;
		for(int i='A'; i<='Z'; ++i) {
			if(v[i] >= i-'A'+1) cnt++;			
			// cout << v[i]<<' ';
		} cout << cnt << endl;
	}

}





// int main(void){
// 	int t; cin>>t; while(t--){
// 		int n; cin>> n; string a; cin>>a;int cnt =0;vector<char> v(255,0);
// 		for(int i=0; i<n; i++){
// 			v[a[i]]++;
// 		}
// 		for(int i='A'; i<='Z'; ++i){
// 			if(v[i] >= i-'A'+1) {
// 				cnt++;
// 			}

// 		}
// 		cout << cnt << endl;
// 	}
// } 

// void solve()
// {
//     int n; cin>>n;

//     string s; cin>>s; vector<int> v(26);int cnt = 0; 

//     for(int i=0; i<s.length(); i++) v[s[i] - 'A']++;  

// 	for(int i=0; i<26; i++)
//     {
//         if(v[i] >= i+1)
//             cnt++;
//     }

//     cout<<cnt<<endl;

// }






		// std::vector<char> v(255,0);
		// for(int i=0; i<a.size() ; ++i) {
		// 	if((a[i] -'A'+1) <= i ) {	//cout << a[i] << ' ' <<n << ' ';
		// 		// n -= (a[i] -'A'+1);
		// 		cnt++;
		// 	}
		// 	// else break;
		// }
		// // for(int i=0; i<cnt ;++i)  v[a[i]]++;
		// // int cnt2=0;
		// // for(int i='A'; i<'Z'+1; ++i)  if(v[i] != 0) cnt2++;