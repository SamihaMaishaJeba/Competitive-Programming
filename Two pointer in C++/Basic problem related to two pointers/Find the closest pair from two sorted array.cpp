//------------------------------------------------Author: Samiha Maisha Jeba--------------------------------------------------\\
//---------------------------------IUBAT-International University of Business Agriculture and Technology-----------------------\\

#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int b[], int n,int m, int x){
	
	int left = 0; 
	int right= m-1;
	int diff = INT_MAX;
	int in1,in2;
	int sum=0;
	
	while( left < n && right>=0){
		sum = a[left] + b[right];
		if( abs( sum - x) < diff ){
			in1 = left;
			in2 = right;
			diff = abs(sum - x);
		}
		
		if(sum < x)left++;
		else right--;
	}
	
	cout<<"Pair: "<<a[in1]<<" "<<b[in2]<<endl;
	cout<<a[in1]+b[in2]<<endl;
}

 int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0; i<n; i++)cin>>a[i];
 	
 	int m;
 	cin>>m;
 	int b[m];
 	for(int i=0; i<m; i++)cin>>b[i];
 	
 	sort(a,a+n);
 	sort(b,b+m);
 	
 	int x; cin>>x;
 	
 	solve(a,b,n,m,x);
 	
 	return 0;
 }
 
 
 /*
Input:
5
1 2 3 4 5
4
6 7 2 3
14

Output:
Pair: 5 7
12


*/