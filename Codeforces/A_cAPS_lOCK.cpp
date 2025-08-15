//SOE_70
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
	string a; cin >> a;

	int cnt =0; for(int i=1; i<a.size(); ++i) if(a[i] >= 'A' && a[i] <= 'Z')cnt++;

	// a[0] >= 'A' && a[0] <= 'Z' ? cout << a[0] : cout << (char) (a[0] - 'a' + 'A');
	if(cnt == a.size()-1)for(int i=0;i<a.size();++i)  a[i]>='a' && a[i]<='z' ? cout << (char) (a[i]-'a'+'A') :cout << (char) (a[i]+'a'-'A');
	else cout << a;
}