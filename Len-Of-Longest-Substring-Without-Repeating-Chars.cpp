// Length of Longest Substring Without Repeating Characters
// Time Complexity  : O(n)
// Space Complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	str="geeksforgeeks";	// Ans -> Length of "eksforg"

	unordered_map<char,int> Map;
	int mx=INT_MIN,start=0;

	for(int i=0;i<str.length();i++){

		char ch=str[i];
		if(Map.find(ch)!=Map.end() and Map[ch]>=start)
			start=Map[ch]+1;
		Map[ch]=i;
		mx=max(mx,i-start+1);
	}
	cout<<mx;

	return 0;
}