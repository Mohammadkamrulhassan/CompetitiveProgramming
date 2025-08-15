//SOE_121
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int t; cin>>t;while(t--) {
		string a; cin>> a;

		if(a.size() == 2 && a == "()") {
			cout << "NO\n";continue;
		}

		bool test = true;

		for(int i=0; i<a.size()-1; ++i) {
			if(a[i] == ')' && a[i+1] =='(') {
				cout << "YES\n"<< string(a.size(),'(') << string(a.size(),')')<< endl; 
				test = false; break; 
			}
		}
		if(test) { string ans ="()";
			cout << "YES\n"; for(int i=0; i<a.size() ; ++i) cout << ans; cout << endl;
		}


	}
}