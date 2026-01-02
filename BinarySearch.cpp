#include<iostream>
using namespace std;
// Implementation of binary search 
// Time Complexity - best case O(1)  - worst case O(logn) - avg case O(log n)
// Space Complexity - O(1)
 

int BinarySearch(int arr[],int n,int key){
	
	int start =0;
	int end = n-1;
	int mid ;
	
	// using while loop 
	while(start<=end){
		mid = start+ (end-start)/2;// it helps to resolve interger overflow 
		
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			start = mid+1;
		} else{
			end = mid-1;
		}
	}
	return -1;
}
int main (){
	 int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
	 
	 cout<<"Enter the element of array in sorted manner :"<< endl;
	  for(int i=0;i<n;i++){
	  	cin>>arr[i];
	  }
	 int key ;
	 cout <<"Enter the element u want to find :"<<endl;
	 cin>>key;
	 
	 cout<<BinarySearch(arr,n,key)<<endl;
	
	
	return 0;
}
