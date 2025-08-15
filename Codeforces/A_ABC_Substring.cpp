#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;  cin >> s; int a=0,b=0,c=0; int n=s.size();

    //counting A,B,C
    for(int i=0; i<n; ++i){  if(s[i] == 'A') a++;  else if(s[i] == 'B') b++;  else if(s[i] == 'C') c++;  }

    char max; if(a >= b && a >= c) max='A';  else if(b >= a && b >= c) max='B';  else if(c >= a && c >= b) max='C';

    for(int i=0; i<n; ++i) s[i] == max ? s[i] = 'K' : s[i] = 'L';

    stack<char> st; char firstChar =s[0],secondChar;st.push(s[0]); //cout <<s << " " <<s[0] <<endl;

    for(int i=1; i<n; ++i) {
        if(s[i] == firstChar) st.push(s[i]);
        else if(st.empty() && s[i] != firstChar) {cout << "NO\n"; return;}
        else if(!st.empty()) st.pop();
    }

    if(st.empty()) cout << "YES\n"; else cout << "NO\n"; 
    return;
}

int main(void) { int t; cin >> t; while(t--)solve(); return 0;}