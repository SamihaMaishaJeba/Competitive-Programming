//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\
// Problem link: https://codeforces.com/problemset/problem/1462/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];
	
	int l = 0; 
	int r = n-1;
	while(l<=r){
		if(l==r)cout<<a[l];
		else cout<<a[l]<<" "<<a[r]<<" ";
		l++;
		r--;
	}
	cout<<endl;
}

int main(){
	
	int t;cin>>t;
	
	while(t--){
		solve();
	
	}
	
	
	return 0;
}

/*
Input:
6
7
3 4 5 2 9 1 1
4
9 2 7 1
11
8 4 3 1 2 7 8 7 9 4 2
1
42
2
11 7
8
1 1 1 1 1 1 1 1



Output:
3 1 4 1 5 9 2 
9 1 2 7 
8 2 4 4 3 9 1 7 2 8 7 
42 
11 7 
1 1 1 1 1 1 1 1 


*/