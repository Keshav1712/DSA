#include<iostream>
using namespace std;


// code for missing element where every element is unique and sequence of n num 



int main (){
	// finding missing value using sum of all element 
	int arr[]={1,2,4,5,6};
	int n = 6;
	int sum =0;
	int ans =0;
	// finding sum of array 
	for(int i =0;i<n-1;i++){
		sum+=arr[i];
		
	}
	
	// find sum of n element 
	
	ans=(n*(n+1))/2-sum;
	
	cout<<"missing element : "<<ans<<endl;
	return 0;
}
