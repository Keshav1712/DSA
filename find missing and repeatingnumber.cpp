#include<iostream>
using namespace std;
/*
GFG question - find missing and repeating number 
approach 1 brute force 
approach 2 make an extra array to store occurance 
approach 3 optimal - t.c - O(n) and space c - O(1)
steps 
1. decrease by number so that it easy to calc correspoining array (0-n)
2. check occurance through modulus operator 
3. find missing number 





*/
int main (){
	int arr [7]={1,2,2,3,6,8,9};
	int n =7;
	
	for (int i = 0;i<n;i++){
		arr[i]--;
	}
	for (int i = 0;i<n;i++){
		arr[arr[i]%n]+=n;
	}
	// missing number 
	for (int i = 0;i<n;i++){
		if(arr[i]/n==0){
		cout<<i+1;
		break;	
		}}
		// repeating number 
	for (int i = 0;i<n;i++){
		if(arr[i]/n==2){
		cout<<i+1;
		break;	
		}
	}
	
}
