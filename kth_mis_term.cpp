#include<iostream>
using namespace std;
/* 
Question - Leetcode 1539 - Kth missing positive number 
Time complexity - O(logn)
Optimized solution of this problem using binary search 

*/
int kthmiss(int arr[],int n ,int k ){
	int start = 0, end = n - 1;
	int ans =n; // handle the case if array is sorted [1,2,3,4] k=2 so its answer should be 6
				//first index where missing >= k


    while (start <= end) {
        int mid = start + (end - start) / 2;
		if(arr[mid]-mid-1>=k){
			ans =mid;
			end =mid-1;
		}
		else {
			start = mid +1 ;
			
		}
    }
    return ans+k;
}
int main(){
	int arr []={2,3,4,7,11,12};
		int n = sizeof(arr)/sizeof(arr[0]);
		int k =4;
		
	
	cout <<kthmiss(arr,n,k)<<endl;
	return 0;
}
