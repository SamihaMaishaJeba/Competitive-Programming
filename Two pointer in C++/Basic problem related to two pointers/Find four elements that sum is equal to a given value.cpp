//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

//Time Complexity O(n^3)
#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int x)
{
	int f=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			int l=j+1; 
			int r=n-1;
			while(l<r){
				int sum=a[i]+a[j]+a[l]+a[r];
				if(sum==x)
				{
					cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<endl;
					f=1;
				}
				if(sum<x)l++;
				else r--;
			}
		}
	}
	if(f==0)cout<<"Such elemnts not found!!"<<endl;
}
 int main()
 {
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0; i<n; i++)cin>>a[i];
 	int x;
 	cin>>x;
 	solve(a,n,x);
 }
 
 
 /*
Input:
5
1 2 3 4 5
12

Output:
1 2 4 5

*/