//SOE_25
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int prePrice = 0,price, have, amount;
    cin >> price >> have >> amount;

    for(int i = 1 ; i<= amount ; i++) prePrice += i* price;

    prePrice - have > 0 ? cout << prePrice - have << endl : cout << 0 << endl;

    return 0;
}