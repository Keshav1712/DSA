#include<iostream>
using namespace std;
/* Ship package problem 
  find the minimum weight need to transport goods
  time complexity - O(nlogn)
  space complexity - O(1)
  
  
*/

int ship(int arr[],int n, int d){
	int start = 0; 
	int end = 0 ;
	int mid , ans ;
	// init start as the max element and end as sum of all element 
	for(int i = 0 ; i<n;i++){
		start =max(start,arr[i]);
		end+=arr[i];
	}
	
	while(start<=end)
	{
		mid = start+(end-start)/2;
		int min =0;
		int count=1;
		for(int i=0;i<n;i++){
			 min+=arr[i];
			if(min>mid){
				count ++;
				min = arr[i];
			}
		}
	if(count<=d){
		ans =mid;
		end =mid-1;
		
	 }
	 else{
	 	start=mid+1;
	 }
	}
}

int main(){
	int arr []={3,2,2,4,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int day = 3;
	cout <<ship(arr,n,day)<<endl; // output - 6 
}
