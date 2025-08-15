//SOE_40
//03.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a; cin >> a;

    int result = 1 ; int cpy = a;
    while(a){
        if(a%10 != 4 && a%10 != 7)  {result = 0; break;}
        a /= 10;
    }
    if(result != 0 )  {cout << "YES" << endl; return 0;}

    a = cpy; int ar[] ={4, 7, 44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i = 0 ; i<14 ; i++){
        if(a%ar[i] == 0) {cout << "YES" <<endl; return 0 ;}
    }
    cout << "NO" <<endl;
}

// #include<bits/stdc++.h>
// using namespace std;

// void solve(int a){ // 4 7 44 77 47 74 444 447 474 477 744 747 774 777 
//     int result = 1;
//     int copyA = a;
//     while(a){
//         if(a%10 == 4 || a%10 == 7) {
//             result = 0;
//             cout << a%10 << ' ' <<endl ;
//         }
//         a /= 10;
//     }
    
//     a = copyA;
//     int ar[] ={4, 7, 44,77,47,74,444,447,474,477,744,747,774,777};
//     int i = 14;
//     if(result == 0){
//         while(i--){
//     	cout << ar[i] << ' ' << a%ar[i] << endl;
//             if(!a%ar[i]) result = 0;
//         }
//     }
    

//     if(result) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }

// int main(void){
//     int a; cin >> a;

//     solve(a);
// }



// if(a%4 == 0 || a%7 == 0 || a%44 == 0 || a%77 == 0 || a%47 == 0 || a%74 == 0 || a%444  == 0 || a%447 == 0 || a%474 == 0 || a%477 == 0 || a%744 == 0 || a%747 == 0 || a%774 == 0 || a%777 ){
    //     result = 1;
    //     // cout << "test" << endl;
    // }


