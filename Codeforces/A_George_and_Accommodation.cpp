//SOE_42
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,result = 0; cin >> n;
    
    for(int i = 0 ; i< n ; i++){
        int max,min; cin >> min >> max;
        if(max-min > 1) result++;
    }
    cout << result << endl;
    return 0;
}