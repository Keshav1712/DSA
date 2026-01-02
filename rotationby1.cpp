#include<iostream>
using namespace std;

// WAP to rotate an array by one just using for loop 

int main (){
	
	int arr[]={1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof (arr[0]);
	
	int temp =arr[n-1];
	
	for(int i =n-2;i>  =0;i--){
		arr[i+1]=arr[i];
	}
	
	arr[0]=temp;
	
	for(int i =0;i<n;i++){
		cout << arr[i]<<endl;
	}
	
	
	return 0;
}
