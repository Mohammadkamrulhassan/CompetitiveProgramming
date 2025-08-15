//SOE_35
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){ 
    int n,testNum,result = 0; cin >> n >> testNum;

    for(int i= 0; i < n; i++){
        int arr; cin >> arr;
        arr % testNum  != 0 ? result += (arr / testNum) + 1 : result += arr / testNum;
    }
    cout << result << endl;

    return 0;
}