/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_322
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-03 21:43:25
 * time end  :  2024-03- 18 01:06:41
*/

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin>>n;
    
    long long int v[100010] = {0};
    for(long long int i=0; i<n; ++i) {
        long long int x; cin>>x;
        v[x] ++;
    }
    v[0] = 0;
    for(int i = 2; i<= 100000; ++i) {
        v[i] = max(v[i-1],v[i-2] + v[i]*i);
    }
    cout << v[100000]<< '\n'; //*max_element(v,v+100010);


    // cout << "Jkj";

    // long long int ans[100010] = {0};
    // ans[0] = 0; ans[1] = v[1];

    // for(int i=2; i<= 100000; ++i) {
    //     ans[i] = max(ans[i-1],(ans[i-2] + i*v[i]));
    // }

    // cout << ans[100000] << '\n';
}


// #include<bits/stdc++.h>
// using namespace std;
//     vector<int> check((int)1e6);
// int main(void) {
//     int n; cin>> n; 

//     map<int,long long int> mp;


//     for(int i=0; i<n ; ++i) {
//         int x; cin>> x;
//         mp[x] += x;
//         check[x] = false;
//     }
//     // for(auto a : mp) cout << a.first << ' ' << a.second << '\n';

//     vector<pair<long long int, int> > val_key;
//     for(auto s : mp) {
//         val_key.push_back({s.second, s.first});
//     }
    
//     sort(val_key.begin(), val_key.end());
//     reverse(val_key.begin(),val_key.end());
//     // for(auto a: val_key) cout << a.first << ' ' << a.second << '\n';cout << '\n';
    
//     long long int ans =0;
//     for(int i=0; i<val_key.size(); ++i) {
//         // cout << val_key[i].second << ' ' << val_key[i].first << '\n';
//         if(check[val_key[i].second] == false) {
//             ans += val_key[i].first;

//             check[val_key[i].second-1] = true;
//             check[val_key[i].second]   = true;
//             check[val_key[i].second+1] = true;
//         }
//     }
//     // for(auto a : check) cout << a.first << '_' << a.second << '\n';
//     cout << ans << '\n';

// }



// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define all(a) (a).begin(),(a).end()


// // This function called by main
// void somadan() {
//     int n = 1;
//     cin >> n;

//     vector<int> v(n);
//     map<int,int> mp;
//     for(int i=0; i<n; ++i) {
//         cin>> v[i];
//         mp[v[i]]++;
//     }
//     ll ans =0;
//     vector<pair<int,long long int> > vp;
//     map<long long int,int> mx;

//     for(auto x : mp) {
//         vp.push_back({x.first,x.first*x.second});
//         mx[x.first*x.second] = x.first;
//     }
//     // sort(all(vp));
//     // reverse(all(mx));
    
//     for(int i=0; i<vp.size(); ++i) {
//     }
//     cout << ans << endl;
   
// }


// int main(void) { 
//     int t = 1; 
//     // cin >> t; 
//     while(t--) somadan();
// }
