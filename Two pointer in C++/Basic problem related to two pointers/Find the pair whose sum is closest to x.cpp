//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int x){
	
	int left = 0; 
	int right= n-1;
	int diff = INT_MAX;
	int in1,in2;
	int sum=0;
	
	while( left < right){
		sum = a[left] + a[right];
		if( abs( sum - x) < diff ){
			in1 = left;
			in2 = right;
			diff = abs(sum - x);
		}
		
		if(sum < x)left++;
		else right--;
	}
	
	cout<<"Pair: "<<a[in1]<<" "<<a[in2]<<endl;
	cout<<a[in1]+a[in2]<<endl;
}

 int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	
 	for(int i=0; i<n; i++)cin>>a[i];
 	sort(a,a+n);
 	int x; cin>>x;
 	
 	solve(a,n,x);
 	
 	return 0;
 }
 
 
 /*
Input:
5
1 2 5 4 3
0


Output:
Pair: 1 2
3



*/