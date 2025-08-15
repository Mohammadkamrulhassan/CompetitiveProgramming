//SOE_162
//13.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int tt; cin>>tt;

	while(tt--) {
		int hour,minute; cin>> hour >> minute;
		cout << (60-minute) + ((23-hour)*60) << endl;
	}
}