//SOE_156
//13.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n, sum=1, total=0 ,i=1,j=0; cin>>n;

    while(sum<=n) {
        n -= sum;
        sum +=(++i);
        j++;
    } cout << j;

    return 0;
}