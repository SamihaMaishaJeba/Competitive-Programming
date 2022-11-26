//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
	int f=0;
	for(int i=n-1; i>=0; i--){
		
		int x=a[i];
		int l=0, r=i-1;
		
		while(l<r)
		{
		   int sum = a[l]+a[r];
		   if(sum==x){
		   	  cout<<a[l]<<" "<<a[r]<<" "<<x<<endl;
		   	  f=1;
		   }
		   if(sum<x)l++;
		   else r--;
	   }
	}
	if(f==0)cout<<"Doesn't exist"<<endl;

}

int main(){
	int n;
	cin>>n;
	
	int a[n+1];
	for(int i=0; i<n; i++)cin>>a[i];
	
	sort(a,a+n);
    solve(a,n);
    
	
	
	return 0;
}

/*
Input:
8
32 1 7 10 50 19 60 2


Output:
10 50 60

*/