/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_342
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-26 01:16:43
 * time end  :  2024-03- 26 01:23:26
*/

#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	// freopen("in","r",stdin); freopen("out","w",stdout);
	int n;string a;
	cin>> n>> a;
	int khobor = 1,j = 1;
	for(int i=0; i<n; ++i) {
		if(j==khobor) {
			cout << a[i];
			khobor++;
			j = 1;
		}
		else {
			j++;
		}
	}
	cout << '\n';
	return 0;
}