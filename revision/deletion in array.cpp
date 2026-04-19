#include<iostream>
using namespace std;
//deletion and shifting of an array

int main (){
	int a[] = {23,11,22,56,34};
	int n = sizeof(a)/sizeof(a[0]);
	
	int pos =2;
	
	if(pos<0||pos>=n){
		cout<<"Invalid "<<endl;
	}
	for (int i=pos;i<n-1;i++){
		// shift left 
		a[i]=a[i+1];
			
		
	}
	
	// print new array 
	for(int j =0;j<n-1;j++){
		cout<<a[j]<<endl;
	}
	
return 0;
}
