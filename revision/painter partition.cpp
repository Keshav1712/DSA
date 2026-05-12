#include<iostream>
using namespace std;
/*Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.

Determine the minimum amount of time required to paint all the boards, under the constraint that each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).

Examples:

Input: arr[] = [5, 10, 30, 20, 15], k = 3
Output: 35
Explanation: The optimal allocation of boards among 3 painters is - 
Painter 1 ? [5, 10] ? time = 15
Painter 2 ? [30] ? time = 30
Painter 3 ? [20, 15] ? time = 35
Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35

*/
int painterall(int arr[],int n , int k ){
	 int start =0;
        int end = 0;
        
        for(int i=0;i<n;i++){
            start = max (start,arr[i]);
            end+=arr[i];
        }
        int ans = end;
        // same as book alloation pattern is to find minimum of maximum 
        while (start<=end){
            int mid = start+(end-start)/2;
            int unit =0;
            int count =1;
        
            for (int i =0;i<n;i++){
                unit +=arr[i];
                if(unit >mid){
                    count++;
                    unit =arr[i];
                    
                }
                
            
                
            }
        if(count<=k){
            ans =mid;
            end =mid-1;
        }
        else{
            start=mid+1;
        }
            
        }
        return ans;
}

int main (){
	int arr[]={5,10,30,20,15};
	int k =3;
	cout<<painterall(arr,5,k)<<endl;
	return 0;
}
