#include<iostream>
using namespace std ;
/*
 Reverse of a 2d array row wise 
 time complexity - o(ncube)
 space complexity - O(n)


*/
int main(){
	
	int arr [3][3]={1,2,3,4,5,6,7,8,9};
	int col = 3 , row = 3;
	
	for(int i =0;i<row;i++){
		int start=0,end = col-1;
		while (start <end ){
			swap(arr[i][start],arr[i][end]);
			start ++;
			end --;
			
		}
		
	}
	
	for (int i =0;i<row;i++){
		for (int j =0;j<col;j++){
			cout<<arr[i][j]<<"\t";
		}
		 cout << endl;  
	}
	
	
	return 0;
}
