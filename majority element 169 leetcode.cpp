#include<iostream>
using namespace std;
/*
leetcode question 169 majority element 
1.brute force - time complexity - O(nsq)
2.better - sort the array - time complexity - O(nlogn)
3. Best approach -Boyer–Moore Majority Vote Algorithm
-- variable - candidate , count 
-- check the count for(i to n) 
--  if (count =0 then count inc by 1 and candiadte = arr [i]
-- else then else if ladder 
-- verify the candidate 
time complexity - O(n)
*/


int main(){
	
	int arr[]={2,2,3,2,3,4,2,2,3,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int candidate;
	int count=0;
	for(int i =0;i<n;i++){
		if(count ==0){
			count++;
			candidate =arr[i];
		}else{
			if(candidate==arr[i]){
				count ++;
			}
			else {
				count --;
			}
		}
	}
	
	// verify 
	count =0;// resetting the value 
	for(int i =0;i<n;i++){
		if(arr[i]==candidate){
			count ++;
		}
	}
		if(count>n/2){
				cout<<" winner candidate is :  "<<candidate<<endl ;
			}
		else{
				return -1;
			}
		
	
	
	
	
	
	
	
	
	return 0;
}
