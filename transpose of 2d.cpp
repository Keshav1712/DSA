#include<iostream>
using namespace std;
/*
Transpose of mtrix 
1. s.c=o(n) and time complexity - O(nsq)
2. space complexity -O(1)-- by traveseing some element and swappng them 
   1 2 3 
   4 5 6 
   7 8 9     element 2 3 6 travesse and swap with 4 7 8 and diagonal will not change ever ;

*/

int main (){
	int matrix [3][3]={1,2,3,4,5,6,7,8,9};
	 // Transpose 2nd way 
	 for(int i =0;i<2;i++){
	 	for(int j =i+1;j<3;j++){
	 		swap (matrix[i][j],matrix[j][i]);
		 }
	 }
	
	
//	int arr[3][3];
//	// transpose part -1
//	for(int i =0;i<3;i++){
//		for(int j=0;j<3;j++){
//			arr[j][i]=matrix[i][j];
//		}
//	}
	// display 
	for(int i =0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
