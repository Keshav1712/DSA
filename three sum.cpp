#include<iostream>
#include<algorithm>
using namespace std ;
/* Three sum problem 
1st approach - Brute force - O(ncube ) 
2nd appraoch - need sorted array and use partially binary search concept - O(nsqlogn)
3rd approach - optimized way - O(nsq) - need sorted array always 
steps -
1.creating a for loop and let be the first elemnent is a part of our three sum (change 3 sum into 2 sum problem)
2. declaring ans = target - first element value 
3. search using binary with condition arr[start]+arr[end] with target value 
4. return the value 



*/
// Bubble sort 
void bsort (int arr [], int n){
	for (int i = n-2;i>=0;i--){
		for (int j =0;j<=i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void threesum(int arr [], int n, int target){
	for (int i =0;i<n-2;i++){
		int ans = target - arr[i];
		 
		 int start = i+1;
		 int end = n-1;
		 
		 while (start<end){
		 	if (arr[start]+arr[end]==ans){
		 		cout << arr[start]<<"+"<<arr[end]<<"+"<<arr[i]<<"="<<target<<endl;	
					return; // use retrun instead of break beacause break only exit from one loop that also run three sum not found statment 
				 		 }
			 
			 else if (arr[start]+arr[end]>ans) 
			 {
			 	end --;
			 
			 }
			 else {
			 	start++;
			 }
		 }
		 
	}
	cout<< " Three Sum Not found "<<endl;
}

int main (){
	int arr [] ={1,2,3,5,4,6}; 
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 10 ;
    bsort(arr,n);
	 threesum(arr,n,target); // output expected - 3+6+1=10
	 return 0 ;
}
