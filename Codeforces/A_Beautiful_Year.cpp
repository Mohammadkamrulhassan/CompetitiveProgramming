//SOE_37
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int year;
    cin >> year;
    for(int i = year+1 ; ; i++){
        int a = i%10;
        int b = (i/10)%10;
        int c = (i/100)%10;
        int d = (i/1000)%10;
        int cnt = 0;
        if(a==b || a==c || a==d || b==c || b==d || c==d){ }
        else{
            cout << i << endl;
            break;
        } 
    }
}