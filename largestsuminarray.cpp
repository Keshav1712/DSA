#include<iostream>
using namespace std;
/*
Kadane algorithm - Find largest sum continuos subarray
1st Approach - find all subarray then compare [time complexity - O(ncube)]
2nd Approach - Prefix sum [Time Complexity - O(nsquare)]
3rd Approach - Kadane Algorithm [Time Complexity - O(n)]


*/
 /* Prefix Sum approach
int largestcontinous(int arr[],int n){
	 int ans =INT_MIN;
	int prev =0;
	for(int i=0;i<n;i++){
		for(int j =i;j<n;j++){
			prev +=arr[j];
				if(prev>ans){
				ans=prev;
				prev=0;
			}
			
		}
	}
	return ans;
}
*/
// Kadane algorithm 
int largestcontinous(int arr[],int n){
int prefix =0;
int sum = INT_MIN;
for(int i =0;i<n;i++){
	prefix+=arr[i];
	sum = max(sum,prefix);
	if(prefix<0){   //handle -2 edge case like [4,-6,2,8] when 4+(-6) = -2  -2 +2 = 0   0+8=8 that is final answer but its wrong 
		prefix=0;
	}
	
}
return sum;

}

int main (){
	int arr []= {4,-6,2,8};
	int n =sizeof(arr)/sizeof(arr[0]);
	cout<<largestcontinous(arr,n)<<endl; // Expected Output - 10 
	
	return 0;
}
