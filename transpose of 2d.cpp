#include<iostream>
using namespace std;
/*
Transpose of mtrix 
1. s.c=o(n) and time complexity - O(nsq)


*/

int main (){
	int matrix [3][3]={1,2,3,4,5,6,7,8,9};
	int arr[3][3];
	// transpose 
	for(int i =0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[j][i]=matrix[i][j];
		}
	}
	// display 
	for(int i =0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
