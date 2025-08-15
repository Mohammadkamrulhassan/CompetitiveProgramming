//SOE_132
//05.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
	int n; cin>> n;

	vector<pair<string,int> > v(n);
	unordered_map<string,int> mp,mp2;
	for(int i=0; i<n; ++i) {
		cin>> v[i].first >> v[i].second;
		mp[v[i].first] +=v[i].second;
	}
	int max_value =0;
	for(auto a : mp) max_value = max(max_value, a.second);

	for(int i=0; i<n; ++i) {
		mp2[v[i].first] += v[i].second;
		if(mp[v[i].first] == max_value && mp2[v[i].first] >= max_value) {
			cout << v[i].first << endl;
			break;
		}
	}
}


int main6(void) {
	int n; cin>> n;

	unordered_map<string,int> ump,ump2,ump3,ump4;
	vector<pair<string,int> > v(n);
	string ans ="";

	for(int i=0; i<n; i++) {
		string name; int points; cin>> name >> points;
		v[i] = {name,points};
		ump[name] += points;
	}
	int max =INT_MIN;
	for(auto it : ump) if(it.second > max) max = it.second;
	// for(auto it : ump) cout << it.first << ' ' << it.second << endl;
	
	int cnt =0; vector<string> v2;
	for(auto it : ump) {
		if(it.second == max) {
			cnt++;
			v2.push_back(it.first);
		}
	}
	if(cnt == 1) {
		for(auto it : ump) {
			if(it.second == max) {
				cout << it.first << endl;
				return 0;
			}
		}
	}

	ump2 = ump;
	for(int i=0; i<n; ++i) {
		ump3[v[i].first] += v[i].second;
		if(ump2[v[i].first] < ump3[v[i].first] ) {
			ump2[v[i].first] = ump3[v[i].first];
		}
	}
	for(auto it : ump2) cout << it.first << ' ' << it.second << endl;
	int max_new= INT_MIN;
	for(int i =0; i<v2.size(); ++i) {
		if(ump2[v2[i]] > max_new) max_new = ump2[v2[i]];
	}/*
	if(max_new == 1){
		for(auto it : ump2) {
			if(max_new == it.second ) {
				cout << it.first << endl;
				return 0;
			}
		}
	}*/
	for(int i=0; i<n; ++i) {
		ump4[v[i].first] += v[i].second;
		if(ump4[v[i].first] == max_new ) {
			cout << v[i].first << endl;
			return 0;
		}
	}
	return 0;
}

int main2(void){ 
	int n; cin>> n; vector<pair<string,int> > v(n); map< string ,int > mp,mx; 

	for(int i=0; i<n; ++i) { 
		cin>> v[i].first >> v[i].second;
		mp[v[i].first] += v[i].second;
		if(mx[v[i].first] < mp[v[i].first]) mx[v[i].first] = mp[v[i].first];
	}
	// max value
	int max =INT_MIN; for(auto i:mx) if(i.second > max) max = i.second; 
	// count max value & vector declare for max keyword
	vector<string> mp3;
	int maxCnt=0; for(auto it: mp) if(it.second == max) {maxCnt++; mp3.push_back(it.first);}

	if(maxCnt == 1){
		for(auto it: mp) if(it.second == max) {cout << it.first <<endl; return 0;}
	}
	else{
		for(int i=0; i<mp3.size(); ++i){
			if(mp[mp3[i]] < mx[mp3[i]]) {cout << mp3[i] <<endl; return 0;}
		}
		for(auto x: mp) {cout << x.first << endl; return 0;}
	}
	// for(auto it : mp3) cout << it << endl;
	
  return 0;
}

int old(void){
	// int n; cin >> n;
	// vector<pair<string,int> > v;
	// map<string,int> mp;
	// for(int i=0 ; i<n; ++i) {
	// 	string a; int b; cin >> a >> b;
	// 	v.push_back({a, b});
	// 	// v.push_back(make_pair(a,b));
	// 	mp[a] = b;
	// }
	// vector<pair<string, int> >vs;
	// for (int i = 0; i < n; i++) {
	//   int s,a; cin >> s >> a;
	//   vs.push_back({s, a});
		
	//   mp[s] += a;
	// }
 
	// map<string, int> :: iterator it;
	// for(it = mp.begin(); it != mp.end() ; it++){
	// 	cout << (*it).first << ' ' << (*it).second << endl;
	// }
	// for(auto pr : mp ){
	// 	cout << pr.first << ' ' << pr.second << endl;
	// }
}