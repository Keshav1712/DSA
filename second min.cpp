#include<iostream>
using namespace std;

int main (){
	int arr []={1,1,1,1};
int n=sizeof(arr)/sizeof(arr[0]);
	
	if(n<2){
		cout<<"there is no second min"<<endl;
			}
			
	int min1=INT_MAX;
	int min2=INT_MAX;
	for(int i=0;i<n;i++){
		// find the min value
		if(min1>arr[i])
		{
			min2=min1;
			min1=arr[i];
		}
		else if(min1!=arr[i]&&min2>arr[i]){
			min2=arr[i];
		}
		
		
	}
	
	if(min2==INT_MAX){
		cout<<" no ditinct value "<<endl;
		
	}		
	else{
		cout<<"second smallest "<<min2<<endl;
	}
	return 0;
}
