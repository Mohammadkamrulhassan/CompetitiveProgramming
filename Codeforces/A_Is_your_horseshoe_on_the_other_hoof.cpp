//SOE_51
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int cnt[4];
int main(void){
    string a[4]; cin >> a[0] >> a[1] >> a[2] >> a[3];  int result =0;
    
    for(int i=0; i<4 ; i++){
        if     (a[i] == a[0]) cnt[0]++;
        else if(a[i] == a[1]) cnt[1]++;
        else if(a[i] == a[2]) cnt[2]++;
        else if(a[i] == a[3]) cnt[3]++;
    }
    
    for(int i=0; i<4; i++){  if(cnt[i] != 0) result += cnt[i]-1; }
    
    cout << result << endl;
}