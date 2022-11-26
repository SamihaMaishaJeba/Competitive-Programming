//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology---------------------\\
//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include<bits/stdc++.h>
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


void solve(){
	ll n,m;
	cin>>n>>m;
	
	ll a[n];
	
	for(ll i=0; i<n; i++){
		cin>>a[i];
		
	}
	ll r=0,x=0,l=0,res=INT_MAX;
	while(l<n){
		for(r=l+1; r<n; r++){
		x+=a[r];
		
		if(x>=20){
			res=min(res,r-l+1);
			//x=0;
			break;
		}
		
	}
	l++;
	}
	
	cout<<res<<endl;
	
	
}

 int main(){
    
    FAST
    
    solve();
   

     return 0;
 }