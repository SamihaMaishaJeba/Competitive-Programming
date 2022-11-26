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
	
	int l=0,c=0,d;
	for(ll j=0; j<m; j++)
	{
		
		cin>>b[j];
		if(b[j]==b[j-1])
		{
				c+=d;
				
		}
		else
		{
			d=0;
				while(l<n)
				{
					int f=0;
					if(a[l] == b[j])
					{
						c++;
				        d++;
				        l++;
				        f=1;
			        }
			        else if(a[l] != b[j] && f==1)
			        {
			        	l-=d;
			        	break;
			        }
			        	else
			        	{
			        		break;
			        	}
			    }
	    }
		
	}
	
	cout<<c<<endl;	
	
}

 int main(){
    
    FAST
    
    solve();
   

     return 0;
 }