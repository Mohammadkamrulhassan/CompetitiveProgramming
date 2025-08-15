//SOE_134
//06.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int arr[4]; cin>> arr[0] >> arr[1] >> arr[2] >> arr[3];

    string str; cin>> str;
    int ans=0;
    for(int i=0; i<str.size(); ++i) {
        ans += arr[str[i] - '1'];
    }cout << ans << '\n';

    return 0;
}