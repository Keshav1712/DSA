#include<iostream>
using namespace std;

// implement insertion sort in decreasing order 

int main (){
	
	int arr[5]={1,2,3,4,5};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	for(int i =1;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]>arr[j-1]){
				swap(arr[j],arr[j-1]);
			}else{
				break;
			}
		}
	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" "<<endl;
	}
	
	return 0;
}
