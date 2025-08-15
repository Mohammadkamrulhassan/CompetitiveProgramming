// SOE_191
// 22.01.2024

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





/**-------------------------coding start now--------------------------------------------*/ 
/**-------------------------coding start now--------------------------------------------*/ 
/**-------------------------coding start now--------------------------------------------*/ 


/**---------------------------main function----------------------------------------------*/ 

int main(void) { 
    ll t = 1; 
    cin >> t; 
    while(t--) somadan();
}




/**-------------------------this is called by main----------------------------------------*/ 

void somadan() {
    ll w,h,n;
    cin >> w >> h >> n;
    ll total = w*h;

    while(1){
        if(w % 2 == 0) {
            w /= 2;
        }
        if(h % 2 == 0) {
            h /= 2;
        }
        if(w % 2 == 1 && h % 2 == 1) {
            break;
        }
    } 
    (total / (w*h)) >= n ? yes : no;
}





/**-------------------------alternative---------------------------------------------------*/ 

void somadan02() {
    ll n = 1;
    cin >> n;
}