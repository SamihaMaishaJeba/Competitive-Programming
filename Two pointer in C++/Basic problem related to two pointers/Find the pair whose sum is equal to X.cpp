//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

#include<bits/stdc++.h>
using namespace std;

bool solve(int a[], int x, int n){
	int i=0,j=n-1;
	
	while(i<j){
		int sum=a[i]+a[j];
		if(sum==x){
			//cout<<a[i]<<" "<<a[j]<<endl;
			return true;
		}
		if(sum<x)i++;  // sum<x means we need to increase our i because array is sorted in ascending order. 
		else j--; // Here we need to decrease our j (last index) 
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	
	int a[n+1];
	for(int i=0; i<n; i++)cin>>a[i];
	
	sort(a,a+n);
	
	int x; cin>>x;
	
	bool get= solve(a,x,n);
	if(get==true)cout<<"PAIR IS FOUND"<<endl;
	else cout<<"PAIR IS NOT FOUND"<<endl;
	
	return 0;
}

/*
Input:
5
1 3 5 4 2
9


Output:
PAIR IS FOUND

*/