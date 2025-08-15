//SOE_15
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string str; cin>> str; vector<char> v;
    for(int i=0; i<str.size(); i +=2) v.push_back(str[i]); sort(v.begin(),v.end());
    for(int i=0; i<v.size(); ++i) (i ==v.size()-1 ) ? cout << v[i] : cout << v[i] << '+' ;
}

int main2(void){
    string sMain;
    string sort;

    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;

    cin >> sMain;

    for(int i= 0; i< sMain.size() ; i +=2){
        if(sMain[i] == '1'){
            cnt1++;
        }
        else if(sMain[i] == '2'){
            cnt2++;
        }
        else if(sMain[i] == '3'){
            cnt3++;
        }
    }
    for(int i = 0; i < cnt1 ; i++){  //1+1 cnt1 =2 // i= 0
            if(i < cnt1 - 1){
                cout << "1+"; //sort[i] << '+';
            }
            else if(cnt2 > 0 || cnt3 > 0){
                cout << "1+";// sort[i] << '+';
            }
            else if (i == cnt1 - 1){
                cout << '1'; // sort[i];
            }
    }
    for(int i = 0; i < cnt2 ; i++){
            if(i < cnt2 - 1){
                cout << "2+"; //sort[i] << '+';
            }
            else if(cnt3 > 0){
                cout << "2+";// sort[i] << '+';
            }
            else if (i == cnt2 - 1){
                cout << '2'; // sort[i];
            }
    }
    for(int i = 0; i < cnt3 ; i++){
            if(i < cnt3 - 1){
                cout << "3+"; //sort[i] << '+';
            }
            else if (i == cnt3 - 1){
                cout << '3'; // sort[i];
            }
    }
}