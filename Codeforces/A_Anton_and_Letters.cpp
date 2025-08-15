//SOE_68
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
	string a; getline(cin , a); vector<int> arr('z'+1,0) ;int cnt =0;

	for(int i=1; i<a.size(); i +=3){
		arr[a[i]]++;
	}
	for(int i='a'; i != 'z'+1; ++i)  if(arr[i] != 0)cnt++;

	cout << cnt << endl;
}