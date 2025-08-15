//SOE_74
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int sum =0; int t; cin >> t;
	while(t--){ 
		string a; cin >> a;
		if(a == "Tetrahedron") sum += 4; 
		else if(a == "Cube" ) sum += 6; 
		else if(a == "Octahedron") sum += 8; 
		else if(a == "Dodecahedron" ) sum += 12; 
		else if(a == "Icosahedron" ) sum += 20; 
	}
	cout << sum << endl;
}