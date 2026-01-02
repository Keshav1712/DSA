#include<iostream>
using namespace std;
 int sum(int a, int b){
 	return a+b;
 }
 int main (){
 	int arr []={2,3,4,6,7,8};
 	for(int i=1;i<6;i++){
 		arr[i]=sum(arr[i],arr[i-1]);
 			cout<<arr[i]<<"  ";
		 
	 }
 	return 0;
 }
