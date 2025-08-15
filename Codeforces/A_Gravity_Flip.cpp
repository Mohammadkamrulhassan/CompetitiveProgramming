//SOE_55
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n; cin>>n;
    int ar[n];
    for(int i=0; i<n ;i++){
    	cin >> ar[i];
    }
    for(int i=0; i<n;i++){
    	for(int j=i+1 ; j<n;j++){
       	if(ar[j] < ar[i]){
           	int temp = ar[i];
               ar[i] = ar[j];
               ar[j] = temp;
           }
       }
    }
    for(int i=0 ; i<n ; i++){
    	cout << ar[i] << ' ';
    }
    cout <<endl;
}