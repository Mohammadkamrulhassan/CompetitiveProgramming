//SOE_69
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n; cin >> n;int cnt =0;
	cnt += n/100; n %=100;
	cnt += n/20; n %=20;
	cnt += n/10; n %=10;
	cnt += n/5; n %=5;
	cnt += n;
	cout << cnt << endl;
}