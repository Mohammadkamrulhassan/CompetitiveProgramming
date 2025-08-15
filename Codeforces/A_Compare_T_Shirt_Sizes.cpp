/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_330
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-21 00:28:31
 * time end  :  2024-03- 21 00:42:14
*/

#include<bits/stdc++.h>
using namespace std;

void faltu(void) {
    string a,b; cin>> a>> b;
    map<char,int> mp = {{'S',1},{'M',2},{'L',3}};
    if(mp[a[a.size()-1]] > mp[b[b.size()-1]] ) {
        cout << ">\n";
        return;
    }
    else if(mp[a[a.size()-1]] < mp[b[b.size()-1]] ) {
        cout << "<\n";
        return;
    }
    else {
        if(a[a.size()-1] == 'S') {
            if(a.size() < b.size()) {
                cout << ">\n";
                return;
            }
            else if(a.size() > b.size()) {
                cout << "<\n";
                return;
            }
            else {
                cout << "=\n";
                return;
            }
        }
        else if(a[a.size()-1] == 'M') {
            cout << "=\n";
            return;
        }
        else {
            if(a.size() < b.size()) {
                cout << "<\n";
                return;
            }
            else if(a.size() > b.size()) {
                cout << ">\n";
                return;
            }
            else {
                cout << "=\n";
                return;
            }
        }
    }

}

int main(void) {
    int tt; cin>> tt;
    while(tt--) faltu();
}