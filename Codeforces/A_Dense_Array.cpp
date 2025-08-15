/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_310
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-13 12:07:25
 * time end  :  2024-03- 13 13:09:25
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;

    while(tt--) {
        int n; cin>> n;

        int ans = 0;
        long long int previous;
        cin>> previous;
        for(int i=1; i< n; ++i) {
            long long int now_org;
            cin>> now_org;

            long long int now = now_org;
            if(max(now,previous) > 2*min(now,previous)) {
                if(previous < now) {
                    while(previous*2 < now) {
                        previous *=2;
                        ans ++;
                    }
                }
                else {
                    while (now *2 < previous) {
                        now *= 2;
                        ans ++;
                    }
                }
            }

            previous = now_org;

        }

        cout << ans << endl;
    }
}