#include<iostream>
using namespace std;
/*
leetcode - 74
Search in 2d array
1. Brute force - time complexity - O(nsq)
2. better approach - using row traverse and binary search - time complexity - O(n+logm)
3. Binary search - we know that cpp store row major so we use formula to convert index to row and col index and rowi to index using pure binary search 
O(n)- time complexity  

*/

int main(){
	int arr[3][4]={12,14,16,18,20,22,24,26,28,30,32,34};
	int n=3, m=4;
	int target = 18;
	int start = 0; 
	int end = n*m-1;
	cout<<end<<endl;
	while (start<=end){
		int mid = (start+end)/2;
		int rowi=mid/m;
		int coli=mid%m;
	
		if(arr[rowi][coli]==target){
			cout<<"found at "<<rowi<<" "<< coli<<endl;
			break;
		}
		else if(arr[rowi][coli]>target){
			end = mid -1;
		}else{
			start =mid+1;
		}
		
	}
	
	
	return 0;
}
