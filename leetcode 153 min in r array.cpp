#include<iostream>
using namespace std;
/*
leetcode -153 find the minimum element in sorted rotated array 
Time complexity - O(log n)
Space complexity - O(1) 
*/

int minimum(int arr[],int n ){
	int start =0, end=n-1;
	int mid ;
	int ans =arr[0];
	while (start<=end){
		mid = end+((start-end)/2); 
		if(arr[mid]>=arr[0]){ // Left side sorted 
			start =mid+1;
		}
		else {                 // Right side sorted 
			ans = arr[mid];
			end =mid-1;
		}
		
	}
	return ans;
}
	int main() {
    int arr[] = {0,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"the minimum elemnent is rotated sorted array : "<< minimum(arr,n)<<endl;
    return 0;
}

