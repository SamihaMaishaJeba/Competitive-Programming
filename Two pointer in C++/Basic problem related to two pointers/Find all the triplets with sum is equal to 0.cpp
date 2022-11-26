//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

///Find all the triplets with sum=0
// Time Complexity O(n^2)
#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n)
{
	for(int i=0; i<n; i++)  
	{
		set<int>s;
		for(int j=i+1; j<n; j++)
		{
			int x = -(a[i]+a[j]);
			
			if(s.find(x)!=s.end())
			{
				cout<<a[i]<<" "<<a[j]<<" "<<x<<endl;
			}
			else s.insert(a[j]);
		}
	}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++)cin>>a[i];	
 	solve(a,n);
 	return 0;
 }
 
/*
Input:
6
1 -1 2 -2 0 -3

Output:
1 0 -1
1 -3 2
2 0 -2

*/