#include<iostream>
using namespace std;

int main (){
	int arr []={1,6,4,8,7,9};
int n=sizeof(arr)/sizeof(arr[0]);
	
	// first find highest element 
	int ans = INT_MIN;
	for(int i =0;i<n;i++){
		if(ans<arr[i]){
			ans=arr[i];
		}
		
	}
	// now find second max
	int x =INT_MIN;
	for(int i=0;i<n;i++){
		if(ans!=arr[i]){
			if(x<arr[i]){
				x=arr[i];
			}
		}
	}
	cout<<"the second largest element is : "<< x<< endl;
	return 0;
}
