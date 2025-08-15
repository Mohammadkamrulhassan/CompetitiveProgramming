//SOE_119
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std;
//1≤n,m,a,b≤1000
//n=total distsnce, m=sp way distance, a= normal way taka/1km, b=sp taka
int main(void){
	int total_distance,sp_km,normal_tk_per_km,sp_tk;
	int ans=0;
	cin>> total_distance >> sp_km >> normal_tk_per_km>> sp_tk;
	
	double special_tk_per_km_double = (double) (sp_tk/sp_km); 
	double normal_tk_per_km_double = (double) normal_tk_per_km;

	if(special_tk_per_km_double < normal_tk_per_km_double ) {		//8 3 2 2
		ans=((total_distance/sp_km)+1)*sp_tk;
		int temp = ((total_distance/sp_km))*sp_tk + (total_distance%sp_km)*normal_tk_per_km;
		ans = min(temp,ans);
		cout << ans << endl;
		return 0;
	}else{
		cout<< total_distance*normal_tk_per_km <<endl; return 0;
	}
}