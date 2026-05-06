#include<iostream>
using namespace std;

int main (){
	int arr []={5,7,7,8,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int start =0;
	int end = n-1;
	int target = 8;
	// binary search 
	while (start <=end){
		int mid = start + (end-start)/2;
		if(arr[mid]==target){
			cout<<"found at : "<<mid<<endl;
			if(arr[mid+1]==target ){
				cout <<"last found at : "<<mid+1<<endl;
				break;
			}
			else if(arr[mid-1]==target){
				cout <<"last found at : "<<mid-1<<endl;
				break;
			}
			else{
				break;
			}
		}
		else if (arr[mid]<target){
			start=mid+1;
			
			
		}else{
			end= mid -1; 
		}
		
		
	}
	
	return 0;
}
