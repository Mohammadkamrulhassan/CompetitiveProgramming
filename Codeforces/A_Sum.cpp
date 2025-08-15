//SOE_95
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t; cin>> t; while(t--){ int a,b,c; cin>> a>> b>> c; (a+b == c || b+c ==a || c+a == b)? cout << "YES\n" : cout << "NO\n";}
}