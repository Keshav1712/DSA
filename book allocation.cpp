#include<iostream>
using namespace std;
/* Book allocation  GFG Question allocate minimum number of pages 
1. each student get one book 
2. book will be allocated in contiguos way 
3. out of all permutation student with most number of book will get minimum pages 
for eg of 3 cond - [12,34,67,90] -- minimum - 113 
time complexity - O(nlogn)
space complexity - O(1)



*/
int bookallocation(int arr[] , int n,int k){
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
	int arr[]={12,34,67,87};
	int n = 4 ;
	int k = 2;
	cout<<bookallocation(arr,n,k); // output - 113 
	return 0;
}
