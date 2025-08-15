/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of Allah, Most Gracious, Most Merciful")
 *           :  SOE_297
 * Time Zone :  GTM +06:00 Bangladesh Standard Time
 * time start:  2024-Mar-03 15:23:51
 * time end  :  2024-03- 03 15:15:21
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()


// This function called by main
void somadan() {
    int x1,y1,x2,y2;
    cin>> x1 >> y1 >> x2>> y2;

    int x3=INT_MIN,y3=INT_MIN,x4=INT_MIN,y4 = INT_MIN;
    
    
    if(x1 == x2) {
        /*
            (0,1)________
                |        |
                |        |
                |________|
            (0,0)
        */
        int temp = abs(y2-y1);

        if(temp + x1 <= 1000 && temp + x1 >= -1000) {
            y3 = y1;
            y4 = y2;
            x3 = x1+temp;
            x4 = x2+temp;
        }
        else if(x1 - temp <= 1000 && x1 - temp  >= -1000) {
            y3 = y1;
            y4 = y2;
            x3 = x1-temp;
            x4 = x2-temp;
        }
    }

    else if(y1 == y2) {
        /*
                 ________
                |        |
                |        |
                |________|
            (0,0)      (1,0)
        */
        int temp = abs(x2-x1);

        if(temp + y1 <= 1000 && temp + y1 >= -1000) {
            x3 = x1;
            x4 = x2;
            y3 = y1+temp;
            y4 = y2+temp;
        }
        else if(y1 - temp <= 1000 && y1 - temp  >= -1000) {
            x3 = x1;
            x4 = x2;
            y3 = y1-temp;
            y4 = y2-temp;
        }
    }

    else if(abs(x1-x2) == abs(y1-y2)) {
        /*
                 ________ (1,1)
                |        |
                |        |
                |________|
            (0,0)
        */
            x3 = x2;
            x4 = x1;
            y3 = y1;
            y4 = y2;
    }


    if(x3 != INT_MIN && x4 != INT_MIN && y3 !=INT_MIN && y4 != INT_MIN) {
        cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << '\n';
    }
    else {
        cout << "-1\n";
    }
}


int main(void) { 
    int t = 1; 
    // cin >> t; 
    while(t--) somadan();
}
