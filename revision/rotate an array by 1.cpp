#include<iostream>
using namespace std;

int main (){
	int a []={2,3,6,7,8,9};
	int n =sizeof(a)/sizeof(a[0]);
	int temp = a[n-1];
	// rotate by 1 
	for(int i = n-2;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=temp;
	
	// displaying an array 
	for(int i =0;i<n;i++){
		cout<<a[i]<<endl;
	}
	
	
	
	
	return 0;
}

