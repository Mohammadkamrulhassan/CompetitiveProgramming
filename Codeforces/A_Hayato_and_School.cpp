//SOE_72
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n; vector<int> v(n); int odd =0; int even =0;int cnt =0,cntOdd=0,cntEven=0;
	for(int i=0; i<n; ++i){ cin >> v[i];   v[i]%2 ==0 ? even++ : odd++;  }

	if(even>1 && odd>0) {
		cout<<"YES\n";
		for(int i=0;i<n;++i){
			if(v[i]%2 ==0 && cntOdd < 2){ cout << i+1 <<' ';cntOdd++;cnt++; }
			else if(v[i]%2 !=0 && cntEven < 1) {cout << i+1 << ' '; cntEven++;cnt++;}
			if(cnt ==3 ) {cout << endl; break;}
		}
	}
	else if(odd>2) {
		cout<<"YES\n";
		for(int i=0;i<n;++i){
			if(v[i]%2 ==1 && cnt <= 2) {cout << i+1 << ' '; cnt++;}
			if(cnt ==3 ) {cout << endl;break;}
		}
	}
	else cout << "NO\n";
}

int main(void){ int t; cin >> t; while(t--)solve(); }