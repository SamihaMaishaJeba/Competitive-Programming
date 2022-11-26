//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology----------------------\\
//-------------https://codeforces.com/contest/1006/problem/C-------------

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)cin>>a[i];
	
	int l=0; 
	int r=n-1;
	ll sum1=0, sum2=0,ans=0;
	
	while(l<=r){
		
		if(sum1>sum2)
		{
			sum2+=a[r];
			r--;
		}
		else{
			sum1+=a[l];
			l++;
		}
		if(sum1==sum2){
			ans=max(ans,sum1);
			
		}
		
	}
	cout<<ans<<endl;
	
}

int main(){
	
	solve();
	
	return 0;
}

