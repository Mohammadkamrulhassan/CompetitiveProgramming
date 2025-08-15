//SOE_39
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    string a; cin >> a;

    int index,check = 0;
    for(int i = 0; i< a.size() ; i++){
        if(check == 0 && a[i] == 'h') ++check;
        else if(check == 1 && a[i] == 'e') ++check;
        else if(check == 2 && a[i] == 'l') ++check;
        else if(check == 3 && a[i] == 'l') ++check;
        else if(check == 4 && a[i] == 'o') ++check;
        
        }
        check == 5 ? cout << "YES\n" : cout << "NO\n";
   
}