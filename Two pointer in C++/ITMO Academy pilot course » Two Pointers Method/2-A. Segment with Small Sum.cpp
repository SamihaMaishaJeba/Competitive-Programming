//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

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
	ll r=0,x=0,l=0,res=0;
	
	for(r=0; r<n; r++){
		x+=a[r];
		
		while(x>m){
			x-=a[l];
			l++;
		}
		res=max(res,r-l+1);
	}
	cout<<res<<endl;
	
	
}

 int main(){
    
    FAST
    
    solve();
   

     return 0;
 }