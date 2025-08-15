/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_336
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-25 01:10:43
 * time end  :  2024-03- 25 01:59:20
*/

#include<bits/stdc++.h>
using namespace std;

void faltu(void) {
	int n,a,b; cin>> n>> a>> b;

	string str = "a";

	for(int i=1; i<b; ++i) {
		str+=(str[i-1]+1);
	}
	int j=0;
	for(int i=0; i<n; ++i) {
		if(j<str.size())
			cout << str[j++] ;
		else {
			cout << str[0];
			j = 1;
		}
	}
	cout << '\n';

}

int main(void) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int tt; cin>> tt;
	while(tt--) faltu();
}