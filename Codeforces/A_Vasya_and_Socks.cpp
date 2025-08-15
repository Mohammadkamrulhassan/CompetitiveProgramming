//SOE_172
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
    int n,m; cin>> n >>m;
    int temp = n,temp2=0;
    while(1){
        temp2 += (temp%m);
        temp /=m;
        n +=temp;
        temp += temp2;
        temp2 =0;
        if(temp < m) break;
    }cout << n; el;
}

void soe02() {
    //alternative 
}