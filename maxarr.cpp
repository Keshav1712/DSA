#include<iostream>
using namespace std;

void input (int arr[],int n){
	cout<<"Enter "<<" "<<n<<" "<<"array elemnts : "<< endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void max (int arr[], int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<"the maximum element in given array :"<<max<<endl;

}
void fmin(int arr[],int n){
	int min=INT_MAX;
	for(int i =0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
			
		}
	}
	cout<< "minimum element "<<min<<endl;
}
int main (){
	int n;
	cout<<"enter the size of an array :"<<endl;
	cin>>n;
	
	int *arr=new int[n];
	input (arr,n);
	max(arr,n);
	fmin(arr,n);
	return 0;
}
