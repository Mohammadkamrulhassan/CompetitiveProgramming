//SOE_27
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    string a; cin >> a;
    
    int cntU = 0,cntL = 0;

    for(int i=0; i< a.size(); i++) (a[i] >= 'a' && a[i] <= 'z') ? cntL++ : cntU++;

    if(cntU < cntL || cntU == cntL) for(int i= 0; i< a.size() ; i++) cout << (char) tolower(a[i]);

    else  for(int i= 0; i< a.size() ; i++) cout << (char) toupper(a[i]);
    cout << endl;
    
    return 0;
    
}