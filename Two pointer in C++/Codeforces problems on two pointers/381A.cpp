//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology----------------------\\
//-------------https://codeforces.com/problemset/problem/381/A-------------

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];
	
	int l=0, r=n-1;
	int f=0,sreeja=0, dima=0;
	while(l<=r){
	
		if(f==0){
		  if(a[l]>a[r])
		 {
			sreeja+=a[l];
			l++;
			f=1;
		 }
		 else
		 {
			sreeja+=a[r];
			r--;
			f=1;
		 }
		}
		
		
	else{
		if(a[l]>a[r])
		{
			dima+=a[l];
			l++;
			f=0;
		}
		else
		{
			dima+=a[r];
			r--;
			f=0;
		}
	}
		
	}
	cout<<sreeja<<" "<<dima<<endl;
}

int main(){
	
	solve();
	
	return 0;
}

