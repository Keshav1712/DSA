#include<iostream>
using namespace std;

int main (){
	 int arr [3][3]={1,2,3,4,5,6,7,8,14};
	 int n =3;
	 // reverse column
	 
	 for(int j =0;j<3;j++){
	 	int start =0;
	 	int end = n-1 ;
	 	while(start<end){
	 		swap(arr[start][j],arr[end][j]);
	 		start ++;
	 		end--;
		 }
	 }
	 // reverse row 
 for(int i =0;i<3;i++){
	 	int start =0;
	 	int end = n-1 ;
	 	while(start<end){
	 		swap(arr[i][start],arr[i][end]);
	 		start ++;
	 		end--;
		 }
	 }
// display 
for(int i =0;i<3;i++){
	for(int j=0;j<3;j++){
		cout <<arr[i][j]<<"  ";
	}
	cout<<endl;
}


	return 0;
}
