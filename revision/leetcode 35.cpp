#include<iostream>
using namespace std;

int main (){
	int arr[]={5,7,7,8,8,10};
	int n =sizeof(arr)/sizeof(arr[0]);
	int start =0, end = n-1;
	int ans = n;
	int target =6;
	
	while(start <=end ){
		int mid = start+(end-start)/2;
		
		if(arr[mid]==target){
			ans=mid;
			break;
		}
		else if (arr[mid]<target){
			start=mid+1;
			
		}
		else{
			ans=mid;
			end=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
