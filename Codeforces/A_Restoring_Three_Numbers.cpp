//SOE_90
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int num[4]; cin >> num[0] >> num[1] >> num[2] >> num[3]; sort(num,num+4);
	cout << num[3]-num[0] << " " <<num[3]- num[1] << " "<< num[3]-num[2] ;
}