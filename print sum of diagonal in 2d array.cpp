	#include<iostream>
	using namespace std ;
	
	int main (){
		 int arr [3][3] ={1,2,3,4,5,6,7,8,9};
		 
		 // first diagonal 
		 int first = 0;
		 for (int i =0;i<3;i++){
		 	first +=arr[i][i];
		 }
		 // second diagonal 
		 int second = 0;
		 
		 int i =0;
		 int j =2;
		 
		 while (j>=0){
		 	second +=arr[i][j];
		 	i++;
		 	j--;
		 }
		 
		 // print of all diagonal 
		 cout<<"First diagonal sum "<<first << endl;
		 cout<<"Second diagonal sum "<<second << endl;
		
		
		
		
		return 0 ;
	}
