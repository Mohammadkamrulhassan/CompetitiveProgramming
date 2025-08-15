//SOE_87
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> v(2); cin>> v[0] >> v[1]; sort(v.begin(),v.end()); cout << v[0] << ' ' << (v[1]-v[0])/2 << endl;
}