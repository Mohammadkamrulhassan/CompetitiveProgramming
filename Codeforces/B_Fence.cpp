// SOE_181
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
    ll n,k;
    cin>>n>>k;


    vector<ll> sumf(n+1);
    sumf[0]=0;

    vector< pair<ll,ll> > diff;
    


    ll mn = INT_MAX;

    for(int i=1; i<=n; ++i) {
        int x;
        cin>> x;

        sumf[i] = sumf[i-1] + x;

        if(i>=k) {
            diff.pb({i-k+1,sumf[i]-sumf[i-k]});
            mn = min(mn,sumf[i]-sumf[i-k]);
        }
    }



    for(int i=0; i<len(diff); ++i) {
        if(diff[i].second == mn) {
            cout << diff[i].first; pl;
            break;
        }
    }
}

/**-------------------------alternative---------------------------------------------------*/ 
void somadan02() {
    ll n,k; 
    cin>> n >> k;

    vector<ll> mainV(n+1);
    vector< pair<ll,ll> > v;
    ll temp =0,mn = INT_MAX;

    for(ll i=1; i<=n; ++i) {
        cin>> mainV[i];
        temp +=mainV[i];
        if(i>=k) {
            mn = min(mn,temp);
            v.pb({i-k+1,temp});
            temp -= mainV[i-k+1];
        }
    }
    for(ll i=0; i<n; ++i) {
        if(v[i].second == mn) {
            cout << v[i].first << endl;
            break;
        }
    }
}