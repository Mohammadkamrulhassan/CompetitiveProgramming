//SOE_131
//04.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin>> n;

    unordered_map<string ,int> mp;
    while(n--) {
        string x; cin>> x;
        mp[x]++;
    }
    int ans_i = INT_MIN; string ans_s = "";
    for(auto &it : mp) {
        if((it).second > ans_i) {
            ans_i = (it).second;
            ans_s = (it).first;
        } 
    }
    cout << ans_s << endl;
}

int main2(void){
    int n; cin>> n;
    vector<string> v(n);
    for(int i=0; i<n; ++i) cin>> v[i]; sort(v.begin(),v.end());
    vector<pair<int , string> > v2; 
    int j=0;
    v2.push_back(make_pair(1,v[0]));
    for(int i=1; i<n; ++i) {
        if(v[i] == v2[j].second) v2[j].first++;
        else {
            j++;
            v2.push_back(make_pair(1,v[i]));
        }
    }
    sort(v2.begin(),v2.end());
    cout << v2[v2.size()-1].second << endl;
    return 0;
}