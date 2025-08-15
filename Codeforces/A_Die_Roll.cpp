//SOE_161
//15.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int y,w; cin>> y>>w;
	y = max(y,w);	y = 7-y;
	switch(y) {
	case 1: cout << "1/6";
		break;
	case 2: cout << "1/3";
		break;
	case 3: cout << "1/2";
		break;
	case 4: cout << "2/3";
		break;
	case 5: cout << "5/6";
		break;
	case 6: cout << "1/1";
		break;
	}
}
/*
1/6 =1/6
2/6 =1/3
3/6 =1/2
4/6 =2/3
5/6 =5/6
6/6 =1/1
*/