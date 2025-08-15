//SOE_29
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int num,cnt; cin >> num >> cnt ;

    while(cnt--) num%10 == 0 ? num /= 10 : num -=1;
    cout << num << endl;
}