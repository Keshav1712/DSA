#include<iostream>
using namespace std;

int main (){
// find fibbonacci number using array
	int n ;
	cout<<"enter nth element : ";
	cin>>n;
	int arr[1000]; // int arr[n] -> bad ractice array seeks a constant value so i have take a large value 
	
	// first two number are fixed 
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];// elments are sum of revious 2 element 
		
	}
	cout <<n<<"th element of fibonacci is : "<<arr[n-1]<<endl;
	return 0;
}
