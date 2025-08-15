//SOE_38
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;

    while(t--){
        int n,testNum; cin >> n >> testNum;
        bool check = true;vector<int> v(n);
        for(int i=0; i < n ; i++){
            cin >> v[i];
            if(v[i] == testNum) check = false;
        }
        check ? cout << "NO"  << endl : cout << "YES" << endl;
    }
    
}