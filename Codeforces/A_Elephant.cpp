//SOE_26
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a; cin >> a;

    int cnt = 0;
    for( ; a != 0; ){
        if(a>=5){
            a -=5;
            cnt++;
        }
        else if(a>=4){
            a-=4;
            cnt++;
        }
        else if(a>=3){
            a -=3;
            cnt++;
        }
        else if(a>=2){
            a -=2;
            cnt++;
        }
        else if(a>=1){
            a-=1;
            cnt++;
        }
    }
    cout << cnt << endl;
}