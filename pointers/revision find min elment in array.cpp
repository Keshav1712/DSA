#include<iostream>
using namespace std;

int main (){
	
	int a[] = {23,11,22,56,34};
	int n = sizeof(a)/sizeof(a[0]);
	int ans =INT_MAX;
	for (int i=0;i<n;i++){
		if(a[i]<ans){
			ans = a[i];
				
			
		}
	}
	cout<<ans<<endl;
		return 0 ;
}
