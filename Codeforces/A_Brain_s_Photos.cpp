//SOE_166
//16.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int m,n; cin>>m>>n;m*=n;
    
    while(m--) {
        char na;cin>>na;
        if(na== 'W' || na == 'B') {
            cout << "#Black&White\n";
            return 0;
        }
    }cout << "#Color\n";
	
}