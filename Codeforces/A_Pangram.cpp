//SOE_60
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int v[500] ; int cnt =0;

int main(void){
  int x; cin >> x; string a; cin >> a;
  for(int i=0; i<a.size(); ++i){ 
    if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32; v[a[i]] = 1;
  }
  for(int i='a'; i<= 'z' ; ++i) if(v[i] == 1) cnt++;
  cnt == 26 ? cout << "YES" << endl : cout << "NO" << endl;
}