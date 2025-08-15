//SOE_150
//12.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        int cnt_1=0,cnt_2=0;
        int n; cin>>n;
        for(int i=0; i<n; ++i) {
            int x; cin>> x;
            x == 1 ? cnt_1++ : cnt_2++;
        }
        if(cnt_2 == 0) {
            cnt_1%2 ? cout << "NO\n" : cout << "YES\n";
        }
        else if(cnt_1 == 0) {
            cnt_2%2 ? cout << "NO\n" : cout << "YES\n";
        }
        else if(cnt_2%2) {
            cnt_1 > 1 && cnt_1%2 == 0 ? cout << "YES\n" : cout << "NO\n";
        }
        else if(cnt_2%2 == 0) {
            cnt_1%2 == 0 ? cout << "YES\n" : cout << "NO\n";
        }
        
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a=0,b=0,x;
        while(n--)cin>>x,x==1?a++:b++;
        cout<<(a%2==0&&b%2==0||b%2&&a>=2&&a%2==0?"yes\n":"no\n");
    }
}
*/