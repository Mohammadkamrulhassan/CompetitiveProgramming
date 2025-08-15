/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_341
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-26 01:02:07
 * time end  :  2024-03- 26 01:15:04
*/

#include <bits/stdc++.h>
using namespace std;

void faltu(void) {
	int n; cin>> n;
	long long ans =(n/10)*10;
	n = n/10 + n%10;
	while(n > 9) {
		ans += (n/10)*10;
		n = n/10 + n%10;
	}
	cout << ans + n << '\n';
}

int main(void) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	// freopen("in","r",stdin); freopen("out","w",stdout);

	int tc; cin>> tc;
	while(tc--) faltu();
}