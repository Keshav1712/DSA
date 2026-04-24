#include<iostream>
using namespace std;
/*
finding missing number in missing array - using average 

*/


int main (){
	
	int arr[]={1,2,4,5};
	// missing number in a sorted array 
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = arr[n-1];
	int sum1 = (m*((m+1)/2));
	int sum =0;
	for(int i =0;i<n;i++){
		sum +=arr[i];
		
	}
	
	cout<<sum1-sum;
	
	return 0;
}
