// SOE_196
// 2024-01-25 23:27:46

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
    ll n = 1,m;
    cin >> n >> m;
    if(n == m) cout << "0\n";
    // else ((n > m && (n-m) % 2) || (n < m) && !(( m - n ) % 2)) ? cout << "2\n" : cout << "1\n";
    else (  n>m && (n-m)%2   ||   n<m  &&  !((m -n)%2)  ) ? cout << "2\n" : cout << "1\n";
}

/**-------------------------alternative---------------------------------------------------*/ 

void somadan02() {
    ll n = 1,m;
    cin >> n >> m;
    
    if(n == m) cout << "0\n";
    else if(n-m > 0) {
        if((n-m) % 2) {
            cout << "2\n";
        } else {
            cout << "1\n";
        }
    }
    else {
        if((n-m) % 2 ) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }
}