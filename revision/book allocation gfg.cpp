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
int bookallocation(int arr[] ,int k){
int n =4;
// impossible condition student more than books 
if(k>n){
	return -1;
}
int start =0;
int end=0 ;
// calculating ranges 
for (int i =0;i<n;i++){
	start = max(start,arr[i]);
	end = end+arr[i];
	
}


//pattern is to find minimum of maximum 		
int ans = start;
// binary search 
while (start<=end){
	int mid = start+(end-start)/2;
	int pages =0;
	int count = 1; // maintaining student count 
	for (int i =0;i<n;i++){
		pages =pages+arr[i];
		if(pages>mid){
			count ++;
			pages=arr[i]; // allocating to next (2nd )student 
		}
	}
	if(count<=k){
		ans = mid ;
		
		end = mid -1;
	}
	else{
		start=mid+1;
		
	}
}
return ans ;


}

int main (){
	int arr[]={12,34,67,90};
	int k =2;
	cout<<bookallocation(arr,k)<<endl;
	return 0;
}
