/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_340
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-26 00:20:52
 * time end  :  2024-03- 26 00:56:58
*/

#include <bits/stdc++.h>
using namespace std;

void faltu(void) {
	int ax,bx,fx,ay,by,fy;
	cin>> ax >>ay >> bx >> by >> fx >> fy;
	int ans = abs(ax-bx) + abs(ay-by);

	if( (ax==bx && fx==ax && (fy>=min(ay,by) && fy<=max(ay,by))) || (ay==by && fy==ay && (fx>=min(ax,bx) && fx<=max(ax,bx))) ) ans+=2;

	cout << ans << '\n';
}

int main(void) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	// freopen("in","r",stdin); freopen("out","w",stdout);
	
	int tt; cin>> tt;
	while(tt--) faltu();
	return 0;
}