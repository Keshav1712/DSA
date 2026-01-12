#include<iostream>
using namespace std;
 /* This is a GFG question -Segregate 0s and 1s
 Given an array arr consisting of only 0's and 1's in random order. 
 Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.
  example - [1,0,1,0,1,0] -- output should be - [0,0,0,1,1,1] 
  there are 4 approach 
  1st . sort the arr -- time complexity O[nsq] -- brurte force 
  2nd . using sort for vector -- O[nlogn] - optimized 
  3rd . using for loop and count variable  - O[n]
  4th . Two pointer ( we have implemented this )
 
 
 
*/
 






/*  NOt relaible and unsafe design 

void seperate(int arr[],int n){
	
	int start = 0;
	int end = n-1;
	while(start<=end){
		
		if(arr[start]==1&&arr[end]==0){
			swap(arr[start],arr[end]);
			start ++;
			end--;
		}
		else if (arr[start]==0&&arr[end]==0){
			start++;
		}
		else if(arr[start]==1 && arr[end]==1){
			end--;
			
		}
		else {
			end--;
		}
	}
	
}*/



void seperate(int arr[],int n){
	
	int start = 0;
	int end = n-1;
	while(start<=end){
		if (arr[start]==0){
			start ++;
		}else{
			if(arr[end]==0){
				swap(arr[start],arr[end]);
				start++;
				end--;
			}else {
				end --;
			}
		}
		
	}
	
}
void display(int arr[],int n){
	for (int i =0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
int main (){
	
	int arr []={1,0,1,0,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	seperate(arr,n);
	display(arr,n);
	return 0;
}
