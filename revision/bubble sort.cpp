#include<iostream>
using namespace std;
// buuble sort - 
int main (){
	int arr [5]={7,3,5,1,4};
	bool swapped =0;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	
	 for (int i =n-2;i>=0;i--){
	 	swapped =0;// reset the value for check case where array is sorted or not 
	 	
	 	for(int j=0;j<=i;j++){
	 		if(arr[j]>arr[j+1]){
	 			swap(arr[j],arr[j+1]);
	 			swapped =1;
			 }
		 }
		 if(swapped==0){
	//	cout<<"already sorted:"<<endl;
		break;
	}
	 	
	 }
	 for(int i =0;i<n;i++){
		cout<<arr[i]<<endl;
	}

	
	
	return 0;
}
