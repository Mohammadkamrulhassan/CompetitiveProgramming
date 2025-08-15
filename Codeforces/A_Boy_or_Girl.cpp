//SOE_17
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int hsh[1000];

int main(void){
	string a; cin >> a; int b = 0;

	for(int i= 0 ; i< a.size() ; i++) hsh[a[i]]++; 
	for(int i = 'a'; i <= 'z' ; i++) if(hsh[i] != 0) b++; 

	b%2 == 0 ? cout << "CHAT WITH HER!\n" :cout << "IGNORE HIM!\n";
} 