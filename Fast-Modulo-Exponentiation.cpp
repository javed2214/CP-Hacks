// Fast Modulo Exponentiation
// Time Complexity : O(log(b))
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll moduloExpo(ll a, ll b, ll MOD){

	ll res=1;

	while(b){

		if(b&1) res=(res*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return res;
}

int main(){

	ll a,b,MOD;
	a=5,b=3,MOD=10000007;

	cout<<moduloExpo(a,b,MOD);

	return 0;
}