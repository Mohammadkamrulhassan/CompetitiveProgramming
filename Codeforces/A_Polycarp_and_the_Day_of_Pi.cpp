//SOE_53
//03.01.2024

#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n; cin >> n; string b ="314159265358979323846264338327";
    while(n--){
        string a; cin >> a; int result =0;
        for(int i=0; i<a.size(); i++){ if(a[i] == b[i]) result++;  else break;  }
        cout << result << endl;
    }
}