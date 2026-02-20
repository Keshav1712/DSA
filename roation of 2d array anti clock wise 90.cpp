#include<iostream>
using namespace std;
/*
Reverse the matrix anti clock wise - transpose + reverse the column wise 
time complexity - O(nsq)

*/

int main(){
	int arr [3][3]={1,2,3,4,5,6,7,8,9};
	int n =3;
	// trnspose the matrix 
	
	for(int i =0;i<n;i++){
		for(int j =i+1;j<n;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	// reverse column wise 
	for (int i=0;i<n;i++){
		int start =0; 
		int end =n-1;
		while(start<end){
			swap(arr[start][i],arr[end][i]);
			start++;
			end--;
		}
	}
	
	// printing 
	for (int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	return 0;
}

