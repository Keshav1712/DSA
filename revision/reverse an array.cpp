#include<iostream>
using namespace std;

int main (){
	int a[] = {23,11,22,56,34};
	int n = sizeof(a)/sizeof(a[0]);
	int i =0;
	int j = n-1 ;
	while(i<j){
		
		int temp = a[i];
		a[i]=a[j];
		a[j]=temp;
		
		i++;
		j--;
	}
		for(int j =0;j<n;j++){
		cout<<a[j]<<endl;
	}
	return 0;
}
