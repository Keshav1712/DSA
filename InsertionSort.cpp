#include<iostream>
using namespace std;

// Implementation of insertion sort increasing order 
// round 1 - (1,0) r2 - (2,0) ............ (n-1,0) in round n 
// space complexity - O(1)
// time complexity - worst case - O(n*n) , best case - O(n), avg case - O(n*n)

int main (){
	
	int arr[5]={1,2,3,5,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for (int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			} else{
				break;   // break when it is already sorted 
			}
		}
	}
	
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
