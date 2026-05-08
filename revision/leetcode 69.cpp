#include<iostream>
using namespace std;
//sqrt() - find square without using any builtin function 
int main (){
	int x = 25;
	int start =0;
	int end = x;
	int mid , ans;
	
	while (start <=end){
		mid = start + (end-start)/2;
		
		if(mid==x/mid){
			ans=mid;
			break;
			
		}
		else if (mid<x/mid){
			start =mid +1;
			ans =mid ;
		}
		else{
			end=mid -1;
			
		}
	}
	cout<<ans<<endl;
	
	
	
	
	
	
	return 0;
}
