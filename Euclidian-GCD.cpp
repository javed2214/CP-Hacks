// Basic Euclidean Algorithm for GCD

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b){

	if(a==0) return b;
	return GCD(b%a,a);
}

int main(){

	ll a,b;
	cin>>a>>b;
	// cout<<__gcd(a,b);cout<<endl;
	cout<<GCD(a,b);

	return 0;
}