//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

#include<bits/stdc++.h>
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


void solve(){
	int n,m;
	cin>>n>>m;
	vector<ll>a(n);
	vector<ll>b(m);
	
	
	for(ll i=0; i<n; i++)cin>>a[i];
	for(ll i=0; i<m; i++)cin>>b[i];
	
	ll i=0,j=0;
	
	while(i<n or j<m){
		if(j == m || i < n && a[i]<b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else
		{
			cout<<b[j]<<" ";
			j++;
		}
	}
	cout<<endl;
	
}

 int main(){
    
    FAST
    
    solve();
   
    
     return 0;
 }