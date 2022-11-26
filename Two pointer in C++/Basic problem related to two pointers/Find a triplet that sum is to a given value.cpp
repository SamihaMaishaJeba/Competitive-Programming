//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

///Find all the triplets with sum is a given value
// Time Complexity O(n^2)
#include<bits/stdc++.h>
using namespace std;

// Way 1
/*
void solve(int a[], int n, int x)
{
	int f=0
	for(int i=0; i<n; i++)  
	{
		set<int>s;
		for(int j=i+1; j<n; j++)
		{
			int sum = x-(a[i]+a[j]);
			
			if(s.find(sum)!=s.end())
			{
				cout<<a[i]<<" "<<a[j]<<" "<<sum<<endl;
			}
			else s.insert(a[j]);
		}
	}
	if(f==0)cout<<"Sum is not found"<<endl;
}
*/

//Way 2
void solve(int a[], int n, int x)
{
	int f=0;
	for(int i=0; i<n; i++){
		int l=i+1;
		int r=n-1;
		
		while(l<r){
			int sum=a[i]+a[l]+a[r];
			if(sum==x){
				cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
				f=1;
			}
			if(sum<x)l++;
			else r--;
		}
		
	}
	if(f==0)cout<<"Sum is not found"<<endl;
	
}


int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++)cin>>a[i];	
    
    int x;cin>>x;
    
 	solve(a,n,x);
 	return 0;
 }
 
 
  /*
Input:
5
1 2 3 4 5
12

Output:
3 4 5

*/