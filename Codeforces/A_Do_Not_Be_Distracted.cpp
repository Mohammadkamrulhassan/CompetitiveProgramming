// SOE_139
// 09.01.2024

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tt; cin>> tt;
    while(tt--) {
        int n;string a; cin>> n >> a;bool test = false;
        vector<int> hsh('Z'+1,0);
        for(int i=0; i<n-1; ++i) {
            if(a[i] != a[i+1] ) hsh[a[i]]++;
        }hsh[a[n-1]]++;
        for(int i='A'; i<='Z'; ++i) {
            if(hsh[i] > 1){
                test = true;
            }
        }
        !test ? cout << "YES\n" : cout << "NO\n";
    }
}

int main2()
{
    int t, i, j, k, f, n;
    string s;
    for (std::cin >> t; t--;)
    {
        std::cin >> n >> s, f = 0;
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
                for (k = i + 1; k < j; k++)
                    if (s[i] == s[j] && s[i] != s[k])
                        f = 1;
        puts(f ? "NO" : "YES");
    }
}