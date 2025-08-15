/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_343
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-26 01:29:18
 * time end  :  2024-03- 26 01:44:49
*/

#include <bits/stdc++.h>
using namespace std;

void faltu(void) {
	int v[3],a;
	cin>> a >> v[1] >> v[2] >> v[3];
	// cout << v[1] << v[2] << v[3] << a;

	if(v[a] == 0) {
		cout << "NO\n";
		return;
	}
	else {
		a = v[a];
		if(v[a] == 0) {
			cout << "NO\n";
			return;
		}
		else {
			cout << "YES\n";
			return;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	// freopen("in","r",stdin); freopen("out","w",stdout);

	int tc; cin>> tc;
	while(tc--) faltu();
}