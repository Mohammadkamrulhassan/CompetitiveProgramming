
//problem link : https://codeforces.com/problemset/problem/2/A
//my submission code link : https://codeforces.com/contest/2/submission/222863338

//code
#include<iostream>
#include<string.h>

using namespace std;

int main(void){
    int t ;
    cin >> t ;

    int t2 = t;
    string name[100];
    int value[100];
    string sortName[100];
    int totalValue[100];
    int largeNumber = 0;
    int indexOfLargeNumber = 0;

    for(int i = 0 ; i < t2 ; i++ ){

        cin >> name[i] >> value[i];         //inputing
        // cout << name[i] << value[i];
        
        for( int k = 0 ; ; ){
            if(sortName[k].empty()){        //sorting name
            sortName[k] = name[i];
            totalValue[k] = 0;
            // cout << k << " " << totalValue[1] << endl;
            }
            
            if(sortName[k] == name[i] ){       //value calculateing
                totalValue[k] += value[i];
                
                for(int m = 0 ; totalValue[m] != '\0' ; m++){
                    if(largeNumber < totalValue[m]){
                        largeNumber = totalValue[m];
                        indexOfLargeNumber = m;
                        // cout << indexOfLargeNumber << largeNumber << totalValue[m] << endl;
                    }
                }
                break;
            }
            else{
                k++;
            }
        }
    }

    cout << sortName[indexOfLargeNumber] << endl;
    
    return 0;
}
