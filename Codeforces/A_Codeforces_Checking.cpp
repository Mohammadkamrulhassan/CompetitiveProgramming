//SOE_52
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n; char a; 
    for(int i=0; i<n; i++){ cin >> a; (a =='c' || a =='o'|| a =='d'|| a =='e'|| a =='f'|| a =='r'|| a =='s') ? cout << "YES" << endl : cout << "NO" << endl; }
    return 0;
}