// SOE_195
// 2024-01-24 16:31:00

#include <bits/stdc++.h>
using namespace std;

/**-------------------------defines---------------------------------------------------*/ 
#define ll long long int
#define all(a) (a).begin(),(a).end()
#define len(a) (a).size()
#define ff(x,n) for(int i=(x); i<(n); ++i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define hibi cout << " t \n"
#define pl cout << endl

#define vi vector<int>
#define vl vector<ll>
#define pb push_back




/**---------------------------------function-------------------------------------------*/ 
void somadan();void somadan02();





/**-------------------------coding start now--------------------------------------------
 * -------------------------coding start now--------------------------------------------
 * -------------------------coding start now--------------------------------------------
*/ 


/**---------------------------main function----------------------------------------------*/ 

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}




/**-------------------------this is called by main----------------------------------------*/ 

void somadan() {
    ll n = 1; string a;
    cin>> n >> a;


    int x=0,y=0;

    for(int i=0; i<n; ++i) {
        if(a[i] == 'U') y++;
        else if(a[i] == 'D') y--;
        else if(a[i] == 'R') x++;
        else x--;

        if(x==1 && y == 1) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n"; return;
}





/**-------------------------alternative---------------------------------------------------*/ 

void somadan02() {
    ll n = 1;
    cin >> n;
}