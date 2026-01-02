#include<iostream>
using namespace std;

int main (){
	int arr []={9,8,7,6,5};
	// reversal way using while loop 
	int i = 0;
	int j =4;
	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	for(int i =0;i<5;i++){
		cout<<arr[i]<<" "<<endl;
	}
	
	// using for loop
	int n=sizeof(arr)/sizeof(arr[0]);
	cout << "using for loop"<<endl;
	for(int i=0;i<n/2;i++){
		int temp =arr[i];
		arr [i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(int i =0;i<5;i++){
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
