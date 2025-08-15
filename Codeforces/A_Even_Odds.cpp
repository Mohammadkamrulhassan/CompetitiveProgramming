//SOE_48
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long int n, k; cin >> n >> k;

    if(n%2 ==0){
        if(k <= (n/2)){ cout << (k*2)-1 << endl; }
        else{ cout << (k-(n/2))*2  << endl; }
    } 
    else{ 
        if(k <= (n/2)+1){ cout << (k*2)-1 << endl; }
        else{ cout << 2*(k-((n/2) + 1)) << endl; }
    }
}

    // if(     n/2 <  k && n%2 == 0){cout << 2*(k-(n/2)) << endl;}     //n even // n/2 < k
    // else if(n/2 <  k-1 && n%2 == 1){cout << n/2;cout << 2*(k-(n/2)-1) << endl;}   //n odd // n/2 < k 
    // else if(n/2 >= k && n%2 == 0){cout << (k*2)-1 << endl;}
    // else if(n/2 >= k-1 && n%2 == 1){cout << (k*2)-1 << endl;}