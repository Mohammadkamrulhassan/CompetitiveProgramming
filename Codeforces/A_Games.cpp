//SOE_73
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n; cin >> n;
	vector<pair<int , int> > p(n);
	for(int i=0; i<n; ++i){
		cin >> p[i].first >> p[i].second; 
	}
	int cnt =0;
	// for(int i=0; i< n; ++i) cout << p[i].first << " " << p[i].second << endl;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){ //cout << p[i].first << ' ' << p[j].second << " " << i << ' ' <<j <<  endl;
			if(p[i].first == p[j].second){cnt++;}
		}
	}
	cout << cnt << endl;
}

/* //simplify
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n; cin >> n;int cnt =0;
	vector<pair<int , int> > p(n);
	for(int i=0; i<n; ++i) cin >> p[i].first >> p[i].second;
	for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) if(p[i].first == p[j].second)cnt++; 
	cout << cnt << endl;
}
*/