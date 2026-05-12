#include<iostream>
using namespace std;
/*Capacity To Ship Packages Within D Days   pattern minimum of maxmimum same as book allocation , painter allocation 
Difficulty: MediumAccuracy: 50.14%Submissions: 33K+Points: 4Average Time: 25m
Given arr[] of weights, find the minimum boat capacity to ship all weights within d days, loading in order without exceeding capacity on any day.
Examples:

Input: arr[] = [1, 2, 1], d = 2
Output: 3
Explanation: We can ship with boat capacity 3 in 2 days.
Day 1- 1,2
Day 2- 1
Input: arr[] = [9, 8, 10], d = 3
Output: 10
Explanation: We can ship with boat capacity 10 in 3 days.
Day 1- 9
Day 2- 8
Day 3- 10
Constraints:
1 = d = n = 105

*/int minimumcap(int arr[],int n , int D ){
	int start = 0;
        int end = 0;
        
        for(int i =0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
            
        }
        int ans =start ;
        
        // binary search 
        while (start<=end){
            int mid = start+(end-start)/2;
            
            // 
            int count=1; 
            int val =0;
            for (int i =0;i<n;i++){
                val +=arr[i];
                
                if(val>mid){
                    count++;
                    val=arr[i];
                }
            
                
            }
            
            if(count<=D){
                ans = mid ;
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans ;
	
}

int main (){
	int arr[]={1,2,1};
	int k =2;
	cout<<minimumcap(arr,3,k);
	return 0;
}
