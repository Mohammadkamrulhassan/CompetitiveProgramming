// SOE_177
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


/**---------------------------------function-------------------------------------------*/ 
void somadan();void somadan02();



/**-------------------------coding start now--------------------------------------------*/ 
int main(void) { 
    ll t=1; 
    // cin>>t; 
    while(t--) somadan();
}

/**-------------------------this is called by main----------------------------------------*/ 
void somadan() {
    string str=""; cin>>str;
    if(str[0] != '9' && str[0] > '4') str[0] = ('9' - str[0] + '0');
    for(int i=1; i<str.size(); ++i) {
        if((str[i] > '4')) str[i] = ('9' - str[i] + '0');      // 57('9')-53('5')=4 +48('0') = 52 ('4')       
    }
    cout <<str<<endl;
}

/**-------------------------alternative---------------------------------------------------*/ 
void somadan02() {

}