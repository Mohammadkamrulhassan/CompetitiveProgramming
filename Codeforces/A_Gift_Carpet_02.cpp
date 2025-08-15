#include<iostream>

using namespace std;

int testColumn(){
    int m;
    int n;
    cin >> m >> n;

    for(int i = 0 ; i < m ; i++){
        
    }
}

int testRow(){

}

int main (void){
    int t;
    cin >> t;
    while(t--){
        int test=0;
        test = testColumn();
        if(test != '1'){
            test = testRow();
        }
    }
}