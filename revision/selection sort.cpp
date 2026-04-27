#include<iostream>
using namespace std;

int main (){
	int arr[]={5,2,3,4,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int index =0;
	
	// selection sort - select smallest and swap 
	for (int i =0;i<n-1;i++){
		index =i;
	
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[index]){
				index =j;
				
			}
			
		}
		swap(arr[i],arr[index]);
	}
	
	
	// showing array 
	for(int i =0;i<n;i++){
		cout<<arr[i]<<endl;
		
	}
	
	return 0;
	
}
