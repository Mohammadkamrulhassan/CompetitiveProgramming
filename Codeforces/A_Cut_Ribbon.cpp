/**
 * BISMILLAHIR RAHMANIR RAHIM ("in the name of God, Most Gracious, Most Merciful")
 *              SOE_254
 * time start:  2023-12-14 16:34:41
 * time end  :  2024-02-17 19:59:29
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

// This function called by main
void somadan() {
  ll n, a,b,c;
  cin >> n >> a>> b>>c;

	vector<ll> v(n+1,0);

	ll x=(ll)INT_MIN,y=x,z=x;

	for(int i=1; i<n+1; ++i) {
		if(i>=a) x = v[i-a];
		if(i>=b) y = v[i-b];
		if(i>=c) z = v[i-c];

		v[i] = 1 + max(x,max(y,z));
	}
	cout << v[n] << endl;
  
}

int main(void) { 
  ll t = 1; 
  // cin >> t; 
  while(t--) somadan();
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(void){
// 	int n,a,b,c; cin>> n>> a>> b>> c;

// 	if(a>b)swap(a,b);if(a>c)swap(a,c);if(b>c)swap(b,c);

// 	// cout << a << b << c;
// 	int mo = n%a;
// 	n /=a;
// 	while(mo) {


// 	}

// 	// for(int i)
// }

// {
// /*
// 	// for(int i=0; i<n ; ++i){
// 	// 	cout << (n/a)*a - a*i + ( ( ( (a*i)+(n%a) )/b) *b) <<endl;
// 	// 	if( ((n/a)*a - a*i + ( ( ( (a*i)+(n%a) )/b) *b) == n ) && ( ( (a*i)+(n%a) )%b) ==0 ){
// 	// 		cout << (n/a) - i + ( ( (a*i)+(n%a) )/b) << endl; return 0;
// 	// 	}
// 	// }
// 	// for(int i=0; i<n ; ++i){
// 	// 	if( ((n/a)*a - a*i + ( ( ( (a*i)+(n%a) )/c) *c) == n ) && ( ( (a*i)+(n%a) )%c) ==0 ){
// 	// 		cout << (n/a) - i + ( ( (a*i)+(n%a) )/c) << endl; return 0;
// 	// 	}
// 	// }
// 	// for(int i=1; i<n; ++i){
// 	// 	if    ( (cnt*a) + n2-a*i + b == n ) { if(ans < (cnt - i +1 ) ans =cnt - i +1; )}
// 	// 	else if( (cnt*a) + n2-a*i + b > n ) break;
// 	// }
// 	// for(int i=1; i<n; ++i){
// 	// 	if    ( (cnt*a) + n2-a*i + c == n ) { if(ans < (cnt - i +1 ) ans =cnt - i +1; )}
// 	// 	else if( (cnt*a) + n2-a*i + c > n ) break;
// 	// }
// 	// for(int i=1; i<n; ++i){
// 	// 	if( (cnt*a) + n2-a*i + b == n ) { if(ans > (cnt - i +1 ) ans =cnt - i +1; )}
// 	// 	else if( (cnt*a) + n2-a*i + b > n ) break;
// 	// }		
// 	// for(int i=1; i<n; ++i){
// 	// 	if 		(n2+a*i    == n ) { cout << cnt - i + 1 << endl; return 0;}
// 	// 	else if (nOfB+a*i  == n ) { cout << cntOfB - i + 1 << endl; return 0;}
// 	// 	else if (n2+b*i    == n ) { cout << cnt - i + 1 << endl; return 0;}
// 	// 	else if (nOfB+b*i  == n ) { cout << cntOfB - i + 1 << endl; return 0;}
// 	// }//cout<<cnt<<' '<<n<<" "<<cntOfB<<" "<<nOfB<<endl;		
// int main2(void){
// 	int cnt = n/a; n= n%a;
// 	// cout << cnt << " " << n;
// 	while(n){
// 		if(n+a == b){ cout << cnt << endl; return 0; }
// 		else if( n+a < b ) { n+=a; cnt--; }
// 		else{ break; }
// 	}
// 	while(n){
// 		if(n+a == c){ cout << cnt << endl; return 0; }
// 		else if( n+a < c ) { n+=a; cnt--; }
// 		else{ break; }cout << "test " << cnt << ' ' << n << endl;
// 	}cout << cnt << endl;
// 	int n,a,b,c; cin>> n>> a>> b>> c; if(a>b)swap(a,b);if(a>c)swap(a,c);if(b>c)swap(b,c);
// 	if(n%a==0)cout << n/a << endl; 
// 	else{
// 		int cnt =n/a; n =n%a;
// 		for(int i=1; n!=0; ++i){
// 			if(b-n==a){ cout << cnt <<endl;return 0;}
// 			else if(b-n < a){ n += a; cnt--;}
// 			else{ break; }
// 		} 
// 		for(int i=0; n!=0;++i){
// 			if(c-n==a){ cout << cnt <<endl;return 0;}
// 			else if(c-n < a){ n += a; cnt--; }
// 			else{ break; }
// 		}
// 		cout << cnt << endl;
// 	}
// {
// 	else if(c-())
// 	else if(c-(n%a)==a*i) cout << n/a -i;
// 	int cnt=0;int n;vector<int> v(3);cin>>n>>v[0]>>v[1]>>v[2];sort(v.begin(),v.end());
// 	if( ((n%v[0])==0) || (v[1]-((n%v[0]))==v[0]) || ((v[2]-(n%v[0]))==v[0]) )cout << n/v[0];
// 	int a= v[1] - n%v[0];
// 	for(int i=2; v[0]*i<=a; ++i){

// 	}
// 		for(int i=0; i<3; ++i){
	
// 		else if(  == v[1]) {cnt +=n/v[0];}
// 		else if(== v[2]) {cnt +=n/v[0];}
// 	}

// 	if( ( (n % v[0] || n % v[1] || n % v[2]) == 0) cnt +=n/v[0];
// 	else if( ( n % (v[0]+v[1]) || n % (v[0]+v[1]) || n % (v[1]+v[2]) ) == 0 ) 

// 	else if( n % (v[0]+v[1]) == 0 ) { cnt +=2; }
// 	else if( n % (v[1]+v[2]) == 0 ) { cnt +=2; }
// 	else if( n % (v[2]+v[2]) == 0 ) { cnt +=2; }
// 	else if( n % (v[0]+v[1]+v[2]) == 0 ) { cnt +=3; }

// 	cout << cnt << endl;
// 	while(n--){cout<< n-((n/v[0])*v[0]) << " jsahdkjsa" << endl;
// 		if     (n-((n/v[0])*v[0]) == (v[0] || v[1] || v[2])) {n-=v[0]; cnt++;}
// 		else if((n-v[1])%v[1] == (v[0] || v[1] || v[2])) {n-=v[1]; cnt++;}
// 		else if((n-v[2])%v[2] == (v[0] || v[1] || v[2])) {n-=v[1]; cnt++;}
// 	}
// }
// }
// */	
// }