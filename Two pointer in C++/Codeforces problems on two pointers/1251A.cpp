//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology----------------------\\
//-------------https://codeforces.com/contest/1251/problem/A-------------

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	
	string s;
	cin>>s;
	set<char>p;
	for(int i=0; i<s.size(); i++){
		
		if(s[i]==s[i+1])i++;
		else p.insert(s[i]);
		
	}
	for(auto u:p)cout<<u;
	
	cout<<endl;
	
}

int main(){
	
	int t;cin>>t;
	
	while(t--)
	solve();
	
	return 0;
}

