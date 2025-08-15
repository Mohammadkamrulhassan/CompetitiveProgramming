//SOE_03
//02.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void){
	int tt,cnt=0; cin>>tt;
	while(tt--){
        int cnt_temp =0;
	    for(int i=0; i<3; ++i) {
	        int a; cin>>a;
	        if(a == 1) cnt_temp++;
	    }
	    if(cnt_temp > 1 ) cnt++;
	    cnt_temp =0;
	}
	cout << cnt <<endl;
	
	return 0;
}