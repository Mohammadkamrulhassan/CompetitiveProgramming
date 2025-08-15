//SOE_171
//18.01.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(a) (a).begin(),(a).end()
#define len(a) (a).size()
#define fori(n) for(int i=0; i<(n); ++i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define el cout << endl

void soe();void soe02();
void tt() { ll t; cin>>t; while(t--) soe(); }


int main(void) { soe();}

void soe() {
    //n code
    int a,b; cin>>a>>b;
    int cnt=0,temp=0; 
    while(a>0) {
        cnt +=a;
        temp +=a%b; 
        a /=b; 
        if(temp>=b) {
            a += (temp/b);
            temp =temp%b;
        }
    }
    cout << cnt << endl;
}

void soe02() {
    //alternative 
}