//SOE_31
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
	long long int num; cin >> num;
	int cnt = 0;
	while(num != 0){
		if(num%10 == 4 || num%10 == 7) cnt++;
		num /= 10;
	}
	(cnt == 4 || cnt == 7) ? cout << "YES" << endl : cout << "NO" << endl;

	return 0;
}
