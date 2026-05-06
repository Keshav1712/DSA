#include<iostream>
using namespace std;

int main (){
	int arr []={1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int start =0;
	int end = n-1;
	int target = 5;
	while (start <=end){
		int mid = start + (end-start)/2;
		if(arr[mid]==target){
			cout<<"found at : "<<mid<<endl;
			break ;
		}
		else if (arr[mid]<target){
			start=mid+1;
			
			
		}else{
			end= mid -1; 
		}
		
		
	}
	
	return 0;
}
