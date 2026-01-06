#include<iostream>
using namespace std;
/*
Problem - Agrresive cow GFG 

You are given an array with unique elements of stalls[], which denote the positions of stalls. 
You are also given an integer k which denotes the number of aggressive cows. 
The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

solution - 
1. sort the stalls 
2. declare start =1 , end = diff b/w first and last element of stalls 
3. start while loop (start <= end)
4. calculation mid 
5. declare the value of count=1 and pos = first vlaue of stalls (count =1 ? why? beacuse first cow always placed )
6.run a for loop from 1 to n 
7. check if placing possible of next cows if yes count increase by 1 and pos have value of that cow so that we can calculate next one 
8. close for loop and check if count < k (number of cows ) means not possible to place value so decrease size "end = mid -1 "
9. else (means found ) ans = mid ; and try to find better result "start = mid +1"
10. close while loops and return ans ;
*/
// insertion sort as a sorting algorithm 
void sorted(int arr[],int n ){
	for (int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			} else{
				break;   // break when it is already sorted 
			}
		}
	}

}
int place(int stalls[],int k,int n){
	sorted(stalls,n);
	int start =1;
	int end = stalls[n-1]-stalls[0];
	
	int mid;
	int ans =0;
	
	while (start<=end){
		mid = start+(end-start)/2;
	
		int count =1 , pos = stalls[0]; // declaring count as a flag to store total value of placement can be 
		
		for(int i =1;i<n;i++){
	
			if(stalls[i] - pos >= mid){
				count ++;
				
				pos =stalls[i];
			
			}
			
		}
			if(count <k){
			end =mid-1;
				
				
			} else{
				ans = mid ;
				
				start =mid+1; // check for better results
			}
	}
	return ans;
}
int main (){
	int arr[]={4,2,1,8,9};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	int k =3 ;
	
	cout <<place(arr,k,n)<<endl; // expected output - 3 
	 
}
