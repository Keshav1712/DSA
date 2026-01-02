#include <iostream>
using namespace std ;
/*
Question leetcode - 852  Peak element in a given array 
time complexity - O(logn)
Space complexity - O(1)
frequently error -
Line 1122: Char 34: runtime error: addition of unsigned offset to 0x5030000002e0 overflowed to 0x5030000002dc (stl_vector.h)
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior /usr/lib/gcc/x86_64-linux-gnu/14/../../../../include/c++/14/bits/stl_vector.h:1131:34 
this happen when we calculate mid = start + (start -end)/2; then its try to accesss memeory that is not available 
*/

int peakelement(int arr[],int n){
	int start = 0 , end =n-1;
	int mid ;
	while(start<=end){
		mid = end+((start-end)/2);
		
		if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){ // comaparing with left and right element for ensure mid is peak 
			return mid;
			
		}
		else if(arr[mid]>arr[mid-1]){
			start =mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}

	int main() {
    int arr[] = {1,6,4,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans =peakelement(arr,n);
 cout<< "The peak element (index) of an array is :"<<ans<< " \nThe element is : "<<arr[ans]<<endl;
    return 0;
}

