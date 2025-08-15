//SOE_91
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n; 
    vector<int> v(n+1,0);
    for(int i=1; i<=n; ++i){cin >> v[i];} //v2[i];
    if(v[1] != 1) { cout << "NO" << endl; return;}
    else{ cout << "YES" << endl; return;}
    vector<int> v2 =v;
    sort(v2.begin()+1,v2.end()-1);
    
    for(int i=2; i<n-1; ++i){
        if(v[i-1] < v[i] && v[i]>v[i+1])swap(v[i],v[i+1]);
    }
    v == v2 ? cout << "YES\n" : cout << "NO\n"; 
    return;
}

int main(void){
    int t; cin >> t; while(t--)solve();
}
/*
if(a[index]!=1){
    cout << "NO" << endl;
    return;
  }
  else{
    
  }*/