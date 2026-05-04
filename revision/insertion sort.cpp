#include<iostream>
using namespace std ;
int main (){
	int arr[]={3,2,4,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	// insertion sort 
	for(int i =1;i<n;i++){ // first loop 
	
	for(int j=i;j>0;j--){// second loop inback direction to csort part by part 
	
		if(arr[j]<arr[j-1]){
			swap (arr[j],arr[j-1]);
		}
		else{
			break; // already sorted 
		}
	}
		
	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<endl;
	}	
	
	
	
	return 0;
}
