#include<iostream>
using namespace std;
/* painter partition   GFG Question allocate minimum number of pages 
same as bookallocation 
for eg of 3 cond - [12,34,67,90] -- minimum - 113 
time complexity - O(nlogn)
space complexity - O(1)



*/
int painterallocation(int arr[] , int n,int k){
	 int start =0 ;
	 int end = 0 ;
	 int mid , ans ;
	 for (int i = 0;i<n;i++){
	 	start = max(start,arr[i]); // start values is maximum number of an array
	 	end +=arr[i]; // end value is sum of all element of array
	 }
	  
	
	while (start<=end){
		
		 mid = start+(end-start)/2;
		 int page = 0;
		 int count =1 ;
		 for(int i=0;i<n;i++){
		 	page = page +arr[i];
		 	if(page >mid){
		 		count ++;
		 		page = arr[i];
		 	
			 }
		 }
		if(count<=k){
		
		ans =mid;
		end =mid-1;
		 	}
		else {
		 		start = mid +1;
			 }
	   
}}
int main() {
	int arr[]={5,10,30,20,15};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3; // number of painter 
	cout<<painterallocation(arr,n,k); // output - 35 
	return 0;
}
