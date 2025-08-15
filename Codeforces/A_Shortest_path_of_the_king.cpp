//SOE_10
//02.01.2024

#include<bits/stdc++.h>
using namespace std;

int main(void){
    string from,to; cin>> from >> to; vector<char> v(7,'1'),v2(7,'1');

    int diff_A = to[0] - from[0]; int diff_B = to[1] - from[1]; 
    
    if(diff_A < 0) {
        int temp = (-diff_A);
        for(int i =0; i<temp; ++i) v[i] = 'L'; 
    }
    else   for(int i=0; i<diff_A; ++i) v[i] = 'R'; 

    if(diff_B < 0) {
        int temp = (-diff_B);
        for(int i =0; i<temp; ++i) v2[i] = 'D'; 
    }
    else  for(int i=0; i<diff_B; ++i) v2[i] = 'U';


    if(diff_A < 0) diff_A = (-diff_A);
    if(diff_B < 0) diff_B = (-diff_B);
    
    cout << max(diff_A,diff_B) << endl;
    for(int i=0; i<max(diff_A,diff_B); ++i) {
        if( v[i]  != '1' ) cout << v[i];
        if( v2[i] != '1' ) cout << v2[i];
        cout<< endl;
    }
}


/*
{
    int miniMove(int difA,int difD){
        int miniA = 0;
        int miniD = 0;
        int miniM = 0;
        int angle = 0;

        if(difA < 0)
            miniA = - difA;
        else
            miniA = difA;

        if(difD < 0)
            miniD = - difD;
        else
            miniD = difD;

        if(miniA > miniD){
            miniM = miniA ;
            angle = miniD;
            }
        else{
        miniM = miniD;
        angle = miniA;
    }
        return miniM;
    }

    int miniAngle(int difA,int difD){
        int miniA = 0;
        int miniD = 0;
        int miniM = 0;
        int angle = 0;

        if(difA < 0)
            miniA = - difA;
        else
            miniA = difA;

        if(difD < 0)
            miniD = - difD;
        else
            miniD = difD;

        if(miniA > miniD){
            miniM = miniA ;
            angle = miniD;
            }
        else{
        miniM = miniD;
        angle = miniA;
    }
        return angle;
    }
    void move1(int , int){

    }

    void move2(int , int){

    }

    int main(void){
        string m;
        string n;
        string result;

        cin >> m;
        cin >> n;
        // cout << m[0] << n[1] << endl;

        int difA = n[0] - m[0] ;  // a8 -> h1 = 7
        int difD = n[1] - m[1] ;
        // cout << difA << difD;
        int miniM = miniMove(difA , difD);
        cout << miniM << endl;
        int angle = miniAngle(difA , difD);
        
        while(angle--){
            if(difA > 0){
                cout << 'R';
                difA--;
            }
            else{
                cout << 'L';
                difA++;
            }

            if(difD > 0){
                cout << 'U' << endl;
                difD--;
            }
            else{
                cout << 'D' << endl;
                difD++;
            }
        }
        while(1){
            if(difA > 0){
                cout << 'R' <<endl;
                difA--;
            }
            else if(difA < 0){
                cout << 'L' << endl;
                difA++;
            }

            if(difD > 0){
                cout << 'U' << endl;
                difD--;
            }
            else if(difD < 0){
                cout << 'D' << endl;
                difD++;
            }
            if(difA == 0 && difD == 0)
                break;
        }

    }
}*/