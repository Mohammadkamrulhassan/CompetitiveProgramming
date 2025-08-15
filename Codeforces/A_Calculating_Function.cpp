//SOE_46
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long int n; cin >> n; long long int sum =0; 

    if(n%2 == 0){sum = n/2;}
    else{sum = (n/2) - n;}
    cout << sum << endl;
}