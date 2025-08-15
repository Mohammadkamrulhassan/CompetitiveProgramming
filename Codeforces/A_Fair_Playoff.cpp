//SOE_165
//16.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int tt; cin>>tt;

	while(tt--) {
		int a[4],so[4]; for(int i=0; i<4; ++i) {cin>>a[i];so[i]=a[i];}
		sort(so,so+4);
		((max(a[0],a[1])==so[2] || max(a[0],a[1])==so[3]) && (max(a[2],a[3])==so[2] || max(a[2],a[3])==so[3])) ? cout << "YES\n" : cout << "NO\n";

	}
}

int main2(void) {
	int tt; cin>>tt;

	while(tt--) {
		int a[4],so[4]; for(int i=0; i<4; ++i) {cin>>a[i];so[i]=a[i];}
		sort(so,so+4); int cnt=0,cnt1=0;
		for(int i=0; i<2; ++i) {
			if(a[i] == so[2]) cnt++;
			else if(a[i] == so[3]) cnt++;
			if(a[i+2] == so[2]) cnt1++;
			else if(a[i+2] == so[3]) cnt1++;
		}
		(cnt==1 && cnt1==1) ? cout << "YES\n" : cout << "NO\n";

	}
}
