#include<iostream>
using namespace std;
/* Leetcode Question - 42 - Trapping Rain water 
1st approach- bruteforce comapre with adjacent for getting value of water that can be stored 
2nd aproach - better solution using two array one store maxleft and another create maxrightthen comapre values and got solution t.c - O(n) but s.c-O(n) 
3rd appraoch - optimal approach 
steps -
1. Traverse whole array for finding maximum elemnt and index 
2. declare 2 var leftmost and water 
3. run a loop upto maximum elemnt because we know that rightmost maximum and caneasy comapare values to get answer 
4. for remaining last few elements run a for loop in decreasing order beacuse we know our leftmost element so that it is easy to compare and get values 

Time complexity - O(n)
Space complexity - O(1)  
*/
int traptotal(int arr [], int n){
	int maxright = arr[0] ;
	int upto =0;
for (int i = 1; i < n; i++) {
    if (arr[i] > maxright) {
        maxright = arr[i];
        upto = i;
    }
}
	int leftmost = 0;
	int water =0 ; 
	// upto largest element 
	for (int i =0;i<=upto ;i++){
		
		if (leftmost>arr[i]){
			water += leftmost -arr[i];
		}
		else{
			leftmost = arr[i];
		}
//	    int a = leftmost-arr[i];
//	    leftmost=max(leftmost,arr[i]);
//	    if(a>0){
//	    	water +=a;
//	    
//		}
		}
		// for remaining element 
		
		int rightmost=0;
		for (int i =n-1;i>=upto;i--){
				
		if (rightmost>arr[i]){
			water += rightmost -arr[i];
		}
		else{
			rightmost = arr[i];
		}
//			 int a = rightmost-arr[i];
//	    rightmost=max(rightmost,arr[i]);
//	         if (a>0){
//	         	water +=a;
//	         
//			 }
	    
		}
		return water ;
		
	}
int main (){
	int arr []={4,2,0,5,2,6,2,3};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout <<traptotal(arr,n); // expected output -10
	
	return 0 ;
}
