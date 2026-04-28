#include<iostream>
using namespace std;

// WAP to implememt a bubble sort using 2 loops
int main (){
	bool swapped=0;
	int arr[5]={4,6,8,9,2};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	for (int i=n-2;i>=0;i--){
		swapped = 0;  // reset the value here 
		
		for(int j =0;j<=i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=1;
			}
		}
	
	if(swapped==0){
		cout<<"already sorted:"<<endl;
		break;
	}}
	
	for(int i =0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
