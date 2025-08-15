//SOE_34
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t,max = 0,temp = 0; cin >> t;

    for(int i=0; i<t ; i++){
        int remove,add; cin >> remove >> add;
        temp  += add - remove;

        if(max < temp) max = temp;
    }
    cout << max << endl;
}