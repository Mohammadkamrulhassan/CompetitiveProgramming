// BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
// SOE  2025-07-06 20:43:05(GMT+06) A. Deranged Deletions 1000ms https://codeforces.com/contest/2124/problem/A


#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

void sol() {
    ll n = 1;
    cin >> n;
    
    vector<int> v(n);
    
    int mn = n;
    
    for(int i=0; i<n; ++i) {
    	cin>> v[i];
    	if(v[mn] > v[i]) {
    		mn = i;
    	}
    }
    
    for(int i=1; i<mn; ++i) {
    	if(v[i] > v[mn]) {
    		cout<< "YES\n"  << "2\n"<< v[i] << " " << v[mn] << '\n';
    		return;
    	}
    }
    
    cout << "NO\n";
    
  	return ;
}

int main(void) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    // freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    
    int tc = 1; 
    cin >> tc; 
    while(tc--) {
        sol();
    }
    
    return 0;
}
