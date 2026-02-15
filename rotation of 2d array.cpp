#include<iostream>
using namespace std ;
/* leetcode -48 Rotate image 
1. using extra space  - S.C O(n)
2. using transpose and reverse it 
S.c - O(1)



*/
int main (){
	int arr [4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	// using transpose and reverse 
	// transpose 
	for (int i = 0;i<4-1;i++){
		for (int j =i+1;j<4;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	// reverse the row 
	
	for(int i =0;i<4;i++){
		int start =0;
	int end =3;
		while (start<end ){
			swap (arr[i][start],arr[i][end]);
			start ++;
			end--;
		}
	}cout <<" "; 
	for(int i =0;i<4;i++){
		for (int j =0;j<4;j++){
		cout<<arr[i][j]<<" ";
		}
		cout<<"\n ";
	
	}
	
	//int mat[4][4];
	// int matrix[4][4];
	
//	int col =4;
 /*// using extra space O(n)
	// clock wise rotation 
	for(int i =0;i<4;i++){
		for (int j =0;j<4;j++){
			matrix[j][4-1-i]=arr[i][j];
		}
		
	}
	
	
	// anticlock wise rotation 
	for(int i =0;i<4;i++){
		for (int j =0;j<4;j++){
			mat [i][j]=arr[j][col-1];
		}
		col--;
	}
	// printing anticlock wise 
	cout<<"Anti clock wise print "<<endl;
	for(int i =0;i<4;i++){
		for (int j =0;j<4;j++){
		cout<<mat[i][j]<<" ";
		}
		cout<<"\n ";
	
	} 
	// printing clock wise 
		cout<<"clock wise print "<<endl;
	for(int i =0;i<4;i++){
		for (int j =0;j<4;j++){
		cout<<matrix[i][j]<<" ";
		}
		cout<<"\n ";
	
	}
	
	*/

	return 0 ;
	
}
