//SOE_32
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; string a; cin >> t >> a;

    int cntA = 0; int cntD = 0; 
    for(int i=0; i< a.size() ; i++){ 
        if(a[i] == 'A') cntA++; 
        else if(a[i] == 'D') cntD++; 
    } 
    if(cntA > cntD) cout << "Anton" << endl; 
    else if(cntA == cntD) cout << "Friendship" << endl; 
    else cout << "Danik" << endl; 
}