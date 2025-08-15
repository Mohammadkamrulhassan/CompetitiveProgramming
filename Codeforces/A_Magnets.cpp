//SOE_44
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;int cnt01=0,cnt10=0;
    int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];
    int temp=arr[0];
    for(int i=0;i<n;i++){
    if(temp!=arr[i]){
        if(temp == 01){
                cnt01++;temp=10;
        }
        else if(temp == 10){
            cnt10++;temp=01;
        }
    }
   }
   if(arr[n-1] == 01){
         cnt01++;
   }
   else if(arr[n-1]==10){
    cnt10++;
   }
   cout << cnt01 + cnt10;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(void){
//     int t; cin>> t; int 
//     vector<int> v(t);
//     for(int i=0; i<n; ++i){
//         cin >> v[i];
//     }int temp =v[i];
//     for(int i=1; i<n; ++i){

//     }
// }

// int main(void){
//     int t; cin >> t;

//     int a[t]; string b;int cnt =0;
//     cin >> a[0];
//     for(int i=1, j= 0; i< t; ++i,j +=2){
//         cin >> a[i] ;
//         if(a[i-1] != a[i])cnt++;
        
//         // if(a[i] == 10){ b[j] = '1' ;b[j+1] = '0';}
//         // else{b[j] = '0' ;b[j+1] = '1';}
//     }
    
    
//     // for(int k=0; k< t/2; ++k){
//     //     if(b[k]==b[k+1]) cnt++;
//     // }
//     // for(int k=t/2; k<t; ++k){
//     //     if(b[k]==b[k+1]) cnt++;
//     // }
//     // for(int k=t; k< 2*t; ++k){
//     //     if(b[k]==b[k+1]) cnt++;
//     // }

//     cout << cnt+1 << endl;
// }