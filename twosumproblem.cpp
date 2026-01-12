#include<iostream>
using namespace std;
/*  Leetcode -167 Two sum problem in sorted array 
approach 1. brute force comaparing each values using 2 for loop O(nsq)
app2. using binary search for optimization O(nlogn)
app3 - Two pointer 


*/


 void approach3(int arr[],int n , int target){
 	int start = 0;
 	int end = n-1;
 	int a ,b;
 	
 	while(start<end){
 		if(arr[start]+arr[end]==target){
 			
 			 cout<<"values are : "<<arr[start]<<" "<<arr[end]<<endl;
 			 break;
 		
		 }
		 else if(arr[start]+arr[end]<target){
		 	start ++;
		 }
		 else{
		 	end--;
		 }
	 }
	
	 
 }
int main () {
	int arr []={2,7,11,15,27};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 22;
	 approach3(arr,n,target);
	return 0;	
}
