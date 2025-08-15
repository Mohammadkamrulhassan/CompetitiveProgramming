/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_275
 * time start:  2024-02-26 00:40:03
 * time end  :  2024-02-26 01:03:42
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()

// This function called by main
void somadan() {
    int arr[7];

    for(int i=0; i<7; ++i) {
        cin>> arr[i];
    }
    sort(arr,arr+7);

    int a=arr[0], b, c;

    b = arr[6] - arr[5];

    again :
    int ct = 0;
    if(a==b ) {
        for(int i=0; i<7; ++i) {
            if(a== arr[i]) ct++;
        }
        if(ct == 1) { 
            b = arr[6] - arr[4];
            goto again;
        } 
    }
    c = arr[6] - (a+b);

    cout << a <<' ' << b << ' '  << c << '\n';
  
}

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}
