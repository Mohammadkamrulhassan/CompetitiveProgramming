// SOE_182
// 20.01.2024

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
    ll t=1; 
    // cin>>t; 
    while(t--) somadan();
}





/**-------------------------this is called by main----------------------------------------*/ 

void somadan() {
    ll n,time;
    cin>>n>>time;


    vector<ll> v(n), ans(n);
    


    ll mx = 0,temp=0,cnt=0;

    ff(0,n) {
        cin>> v[i];

        temp +=v[i];
        cnt++;

        if(temp <= time) {
            mx = max(mx,cnt);
        }
        else {
            cnt--;
            temp -= v[i-cnt];
        }
    }
    cout << mx; pl;

}





/**-------------------------alternative---------------------------------------------------*/ 

void somadan02() {

}