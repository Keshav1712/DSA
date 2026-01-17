#include<iostream>
using namespace std;
/*  
pair difference problem   find the pair which diff is target vlaue 
1st apporach - brute force using 2 loops 
2nd pproach - o(nlog) using binary search 
3rd approach - two pointer o(n) -- but need sorted array 

*/


 //sorted array 
 void sorte(int arr[],int n){
 	for(int i =1;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}else{
				break;
			}
		}
	
		
 }
 	// for displaying array 
 	cout<<"sorted array is ";
		for (int i=0;i<n;i++ ){
			
			cout<<" "<<arr[i];
		}
		cout<<" "<<endl;
		}
 
 
 
void diffe(int arr[],int n , int target ){
	int start =0;
	int end =1 ;
	bool found = false ;
	while (end<n){
		int dif = arr[end]-arr[start];
		
		if(dif==target){
			cout<<"pairs  are : "<<arr[end]<<" and  "<<arr[start]<<endl;
			found = true ;
			break;
		}
		else if (dif>target){
			start++;
		}
		else{
			end++;
		}
		
		
	}
	 if (!found) {
        cout << "Pair is not available" << endl;
	
}}


int main (){
	int arr []={10,3,11,9,7}; // need sorted array 
	int n = sizeof(arr)/sizeof(arr[0]);
	int target =5;  
	int tr = 7; 
	
	sorte(arr,n);
	diffe(arr,n,target);//not availble - output is "pairs not availble "
	diffe (arr,n,tr); // output -"pairs  are : 10 and  3"
	
	return 0;
}
