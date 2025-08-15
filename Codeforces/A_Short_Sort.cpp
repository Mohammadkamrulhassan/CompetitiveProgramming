//SOE_21
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string str; cin >> str;
        
        if(str == "abc" || (str[1] == 'a' && str[0] == 'b' && str[2] == 'c' ) || (str[0] == 'a' && str[2] == 'b' && str[1] == 'c' ) || (str[2] == 'a' && str[1] == 'b' && str[0] == 'c' )){
            cout << "YES" << endl;
        }
        else
        cout << "NO" << endl;
    }
}