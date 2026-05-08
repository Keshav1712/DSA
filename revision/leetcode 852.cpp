#include<iostream>
using namespace std;

int main (){
	int arr[]={2,4,6,8,10,3,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int start =0;
	int end = n-1;
	
	int mid ;
	
	while (start<=end){
		mid = start+(end -start)/2;
		
		if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
			cout<<mid<<endl;
			break;
			
		}
		else if(arr[mid]>arr[mid-1]){
		start=mid +1;
		}
		else{
			end = mid -1;
		}
	}
	
	
	
	return 0;
}
