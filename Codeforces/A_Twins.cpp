//SOE_43
//03.01.2024

#include<bits/stdc++.h> 
using namespace std;

int main(void){
    int t; cin >> t;
    int a[t]; int sum=0;

    for(int i = 0; i<t ; ++i){
        cin >> a[i]; sum +=a[i];
    }
    sum = sum/2;

    for(int i = 0; i<t ;i++){
        for(int j=i+1; j<t ; j++){
            if(a[i] > a[j]){int temp = a[i]; a[i] = a[j]; a[j] = temp;}
        }
    }

    int sum2 =0; int cnt =0;
    for(int i=t-1; i>= 0; i--){
        sum2 +=a[i]; cnt++;
        if(sum2 > sum) break;
    }

    cout << cnt << endl;
} 