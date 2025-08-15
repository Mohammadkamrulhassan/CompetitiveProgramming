//SOE_08
//02.01.2024

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int tt; cin >> tt;
    
    while (tt--) {
      int cnt =0; string ch; cin >> ch;

      if(ch[0]=='c') cnt++;
      if(ch[1]=='o') cnt++;
      if(ch[2]=='d') cnt++; 
      if(ch[3]=='e') cnt++; 
      if(ch[4]=='f') cnt++;
      if(ch[5]=='o') cnt++;
      if(ch[6]=='r') cnt++;
      if(ch[7]=='c') cnt++;
      if(ch[8]=='e') cnt++;
      if(ch[9]=='s') cnt++;

      cout << 10-cnt << endl;
    }
    
    return 0;
}