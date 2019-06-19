// Sort an Array of String on the Basis of Length, If Length is the same Sort in Lexicographical Order

#include<bits/stdc++.h>
using namespace std;

bool Compare(string a, string b){

	if(a!=b) return a.size() < b.size();
	return a < b;
}

int main(){

	vector<string> v={"a","cool","b","mobile","car"};
	sort(v.begin(),v.end(),Compare);

	for(auto it:v) cout<<it<<" ";

	return 0;
}
