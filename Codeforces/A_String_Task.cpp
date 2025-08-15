//SOE_18
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main() {
    string a; cin >> a;  //code  "A", "O", "Y", "E", "U", "I"
    for(int i=0 ; i < a.size() ; i++) {
        if(a[i] == 'A' || a[i] == 'O' || a[i] == 'Y' || a[i] == 'E' || a[i] == 'U' || a[i] == 'I' || a[i] == 'a' || a[i] == 'o' || a[i] == 'y' || a[i] == 'e' || a[i] =='u' || a[i] == 'i' ) { }
        else {cout << '.' << (char) tolower(a[i]); }
    }
}
    // for(int i =0 ; i < a.size() - cnt ;i++){
    // 	if(a[i] >= 'a' && a[i] <= 'z') {
    //         cout << '.' << a[i] ;
    //     }
    //     else{
    //     	cout << '.' << (char) (a[i] - 'A' + 'a');
    //     }
    // }
    //cout << a << endl;