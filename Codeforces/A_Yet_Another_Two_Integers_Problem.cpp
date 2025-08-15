//SOE_93
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
void shadow(){
	int a,b; cin >> a >> b; if(a>b)swap(a,b); (b-a)%10 == 0 ? cout << (b-a)/10 << endl : cout << (b-a)/10 +1 << endl;
} 

int main(void){ int t; cin >> t; while(t--)shadow(); }