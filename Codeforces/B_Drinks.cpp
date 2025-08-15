//SOE_47
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;  double sum = 0.0;
    for(int i=0; i<n ; i++){  double a;  cin >> a; sum += (a); }
    cout << setprecision(12)<< fixed << sum/n << endl;
}