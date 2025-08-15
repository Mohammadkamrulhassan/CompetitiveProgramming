/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_306
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-07 22:52:11
 * time end  :  2024-03- 07 23:01:36
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int n = 1;
    // cin >> n;
    
    string str;
    cin>> str;

    int ct =0;
    bool ctt = false;

    for(int i=0; i<str.size(); ++i) {
        if(str[i] == '1' && !ctt) {
            ctt = true;
        }
        if(str[i] == '0' && ctt) {
            ct++;
        }
    }
    for(int i=str.size()-1; str[i] == '0' && ct != 0; --i) {
        ct--;
    }
    cout << ct << endl;
   
}


int main(void) { 
    int t = 1; 
    cin >> t; 
    while(t--) somadan();
}
