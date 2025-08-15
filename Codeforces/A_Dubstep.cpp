//SOE_66
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
	string a;cin>> a;int x=0;

	for(int i=0; i< a.size(); ++i){
		if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B'){i +=2;x=1;}
		else{if(x==1){cout <<' ';x=0;} cout << a[i];}
	}
}