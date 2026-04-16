#include<iostream>
using namespace std;

int main (){
	int a[] = {23,11,22,56,34};
	int n = sizeof(a)/sizeof(a[0]);
	int second = INT_MIN;
	int max = INT_MIN;
	// finding max
	for (int i =0;i<n;i++){
	if(a[i]>max){
			max= a[i];
				
			
		}
		
	}
	for (int i =0;i<n;i++){
	if(a[i]==max){
		continue;
	}else{
		if(second<a[i]){
			second=a[i];
		}
	}
	
	
	}
	cout<<second;
	
	return 0;
}
