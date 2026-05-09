#include<iostream>
using namespace std;
/*
33. Search in Rotated Sorted Array

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4


*/
int main (){
	int arr[]={4,5,6,7,0,1,2};
	int target =0;
	int start =0;
	int n = sizeof(arr)/sizeof(arr[0]);
	int end = n-1;
	 
	while(start<=end){
		int mid = start+(end-start)/2;
		// found at mid 
		if(arr[mid]==target){
			cout<<mid<<endl;
			break;
		}
		
		// left side sorted 
		else if(arr[mid]>=arr[start]){
			if(arr[mid]>target&&arr[start]<=target){
				end=mid-1;
				
			}
			else{
				start=mid+1;
			}
			
		}
		// right is sorted
		else{
			if(arr[mid]<target&&arr[end]>=target){
				start=mid+1;
			}
			else{
				end = mid -1;
			}
		}
		
	}
	
	
	
	
	
	return 0;
}
