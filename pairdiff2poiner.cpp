#include<iostream>
using namespace std;
/*  
pair difference problem   find the pair which diff is target vlaue 
1st apporach - brute force using 2 loops 
2nd pproach - o(nlog) using binary search 
3rd approach - two pointer o(n) -- but need sorted array 

*/


 // NEED sorted array 
void diff(int arr[],int n , int target ){
	int start =0;
	int end =1 ;
	
	while (end<n){
		int dif = arr[end]-arr[start];
		
		if(dif==target){
			cout<<"pairs  are : "<<arr[end]<<" and  "<<arr[start]<<endl;
			break;
		}
		else if (dif>target){
			start++;
		}
		else {
			end++;
		}
	}
}


int main (){
	int arr []={2,3,5,10,50,80}; // need sorted array 
	int n = sizeof(arr)/sizeof(arr[0]);
	int target =45;
	diff(arr,n,target);// output - 50 ,5 
	return 0;
}
