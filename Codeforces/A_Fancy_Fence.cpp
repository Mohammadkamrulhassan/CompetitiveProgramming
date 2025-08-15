// SOE_176
// 19.01.2024

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
#define el cout << endl

#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define vout ff(0,v.size()) cout << v[i] << ' '; el


/**---------------------------------function-------------------------------------------*/ 
void somadan();void somadan02();



/**-------------------------coding start now--------------------------------------------*/ 
int main(void) { 
    ll t=1; 
    cin>>t; 
    while(t--) somadan();
}

/**-------------------------this is called by main----------------------------------------*/ 
void somadan() {
    int angle=1;
    cin>>angle;
    /**
     * a regular polygon is a polygon that is direct equiangular (all angles are equal in measure) 
     * and equilateral (all sides have the same length).
     * 
     * angle = 180(n-2)/n degrees;
     * an*n)/180 = n-2
     * n(1-an/180) =2
     * n((180-an)/180)=2
     * n = 360 / 180-an
     * 60, 90, 180 ....
     * 
    */
    360 % (180-angle) ? no : yes;
    
    
}

/**-------------------------alternative---------------------------------------------------*/ 
void somadan02() {

}