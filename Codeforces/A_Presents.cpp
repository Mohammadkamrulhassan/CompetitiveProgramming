//SOE_45
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;

    int a[n+1]; int b[n+1];
    for(int i=1; i<=n; i++){  cin >> a[i];   b[a[i]] = i;  }

    for(int i=1; i<=n; i++){  cout << b[i] << ' ';  }
}