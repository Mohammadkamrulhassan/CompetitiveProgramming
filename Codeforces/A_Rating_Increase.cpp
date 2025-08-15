//SOW_128
//04.01.2024

#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string x; cin>>x; 
  int i=0; 
  if(x.size() == 2) {
    x[1] - x[0] > 0 ?  cout << x[0] << ' ' << x[1] << endl : cout << "-1\n";
    return;
  }
  //x.size()  >= 3
  for(i=1; i<(x.size()-1); ++i) {
    if(x[i] != '0') {
      break;
    }
  }
  if(x.size()%2 != 0) {
    i <= (x.size()/2) ? cout << x.substr(0,i) << ' ' << x.substr(i) <<endl : cout << "-1\n";
    return;
  }
  if(i != x.size()/2) {
    i < (x.size()/2) ? cout << x.substr(0,i) << ' ' << x.substr(i) <<endl : cout << "-1\n";
    return;
  }
  string x1 = x.substr(0,i),x2 = x.substr(i);
  int x1_i = stoi(x1),x2_i = stoi(x2);
  x1_i - x2_i < 0 ? cout << x1_i << ' ' << x2_i << endl : cout << "-1\n";

}

int main(void) {
  int tt; cin>>tt;

  while(tt--) solve();
}

/*#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int t;cin>>t; 
	while(t--) {
	string a; cin>> a; int index =-1; string x,y,m,n; bool z=true; x.push_back(a[0]);
	for(int i=1; i<a.size(); ++i) {
		if(a[i] != '0' && a[i-1] == '0'){ index = i; break;}x.push_back(a[i]);
	}
	if(index>= 0){ for(int i=index; i<a.size(); ++i) y.push_back(a[i]); }

	if(index>= 0){
		int xI = stoi(x);int yI = stoi(y);

		if(xI<yI) cout << xI << " " << yI << endl ;
		else cout << -1 << endl;// if(xI==yI)
		// else{
		// 	cout << a[0] << " " ; for(int i=1; i<a.size(); ++i) cout << a[i]; cout << endl;
		// }
	
	}
	else{
		m.push_back(a[0]);
		
		for(int i=1; i<a.size(); ++i) n.push_back(a[i]);
		int mI = stoi(m);int nI = stoi(n);
		nI > mI ? cout << mI << ' ' << nI << endl :  cout << -1 << endl;
	}
		
	}
}
*/