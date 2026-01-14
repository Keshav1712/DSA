#include<iostream>
using namespace std;

void diff(int arr[],int n , int target ){
	int start =0;
	int end =1 ;
	
	while (start<end){
		int dif = arr[end]-arr[start];
		
		if(dif==target){
			cout<<arr[end]<<arr[start]<<endl;
		}
		else if (dif>target){
			start++;
		}
		else {
			end--;
		}
	}
}


int main (){
	int arr []={2,3,5,10,50,80};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target =45;
	diff(arr,n,target);
	return 0;
}
