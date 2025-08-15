//SOE_112
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;int main(void){
	int n;cin>>n; vector<int> v;
	for(int i=1,j=1; j<=1000; ++i){
		if(((i%3)!=0) && ((i%10)!=3)) {v.push_back(i);j++;}
	}while(n--){ int x;cin>> x;cout<<v[x-1]<<endl; }
}