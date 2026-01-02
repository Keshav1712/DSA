#include<iostream>
#include<vector>
using namespace std;
// WAP to find first and last ocuurance of an element in an array 
// time complexity - O(logn) - using binary search 
int main (){
	int start =0 ,  mid ,target;
	int first =-1 , last = -1;
	int arr []={1,2,2,4,4,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
	int end = n-1;
	target =10;
	// finding first occurance 
	
	while (start<=end){
		mid = start +(end-start)/2;
		if(arr[mid]==target){
			first =mid;
			end = mid -1 ;
		
		}
		else if(arr[mid]>target){
			end =mid-1;
		}
		else {
			start =mid+1;
		}
		
	}
	
	// finding last occurance 
	start =0,end=n-1;// resetting start and end value 
	while (start<=end){
		mid = start +(end-start)/2;
		if(arr[mid]==target){
			last =mid;
			start =mid+1;
		
		}
		else if(arr[mid]>target){
			end =mid-1;
		}
		else {
			start =mid+1;
		}
	
	}
	
if(first == -1 && last == -1)
{  
		cout<<" Target element  is not present "<<endl;
	} else{
		cout<<"First occ : "<<first<<" "<< "last occu : "<< last<< endl;
	}
	
	
	return 0;
}
