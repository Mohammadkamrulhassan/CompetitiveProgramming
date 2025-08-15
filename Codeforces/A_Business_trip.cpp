/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_304
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-05 04:47:41
 * time end  :  2024-03- 05 04:53:55
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int k = 1;
    cin >> k;
    
    int sum =0; 
    vector<int> v(12);
    for(int i=0; i<12; ++i) {
        cin>> v[i]; sum += v[i];
    }
    if(k==0) {
        cout << "0\n";
        return;
    }
    if(k>sum) {
        cout << "-1\n";
        return;
    }
    sort(all(v)); reverse(all(v));

    int temp =0;
    for(int i=0; i< 12; ++i) {
        temp += v[i];
        if(temp >= k) {
            cout << i+1 << endl;
            return;
        }
    }
   
}


int main(void) { 
    int t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
