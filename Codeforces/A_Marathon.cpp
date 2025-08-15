//SOE_109
//03.01.2024
 
#include<bits/stdc++.h>
using namespace std; int main(void){
    int t;cin >> t; 
    while(t--) { 
        int a;cin>> a;int cnt=0;int n=3; 
        while(n--) { 
            int b;cin>> b;if(b>a)cnt++; 
        }cout << cnt <<endl; 
    } 
}