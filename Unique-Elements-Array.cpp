// Unique Elements in an Array using STL 

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4,5,6,2,3,4,5,1,2,2,3,4,5};
	int n=sizeof(a)/sizeof(int);

	sort(a,a+n);
	n=unique(a,a+n)-a;	// ** FOR ARRAYS **

	// sort(v.begin(),v.end());
	// v.erase(unique(v.begin(),v.end()),v.end());   ** FOR VECTORS **

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}