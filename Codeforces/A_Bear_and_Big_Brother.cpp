//SOE_20
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a,b; cin >> a >> b;
    int result= 0,c = 0, d = 0;

    while(1){
        if(a > b && result > 0){
            cout << result << endl; break;
        }
        a *= 3; b *= 2;
        result++; 
    }
}