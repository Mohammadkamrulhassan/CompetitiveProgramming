//SOE_173
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


int main(void) { tt();}

void soe() {
    //n code
    int a[3],n; cin>> a[0]>>a[1]>>a[2]>>n; sort(a,a+3);
    int temp = a[2] - a[0] + a[2] -a[1];
    ((n-temp)%3 ==0) && n>=temp ? yes : no;

}

void soe02() {
    //alternative 
}