#include<iostream>
using namespace std;
/*koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile.
 If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.

start =1 or sum /h 
end = maximum element in piles 




*/

int eat(int piles[],int n, int h){
int start =0,end =0;
int mid, ans ;
long long sum =0;

for (int i =0;i<n;i++){
	sum +=piles[i];
	end = max(end,piles[i]);
	
}
	start = sum /h;
	if(!start){start=1;}
	
	while (start<=end){
		mid = start+(end-start)/2;
		 int total_time=0;
		 for(int i=0;i<n;i++){
		 	total_time+=piles[i]/mid;
		 	if(piles[i]%mid){
		 		total_time++;
			 }
		 }
		
		if (total_time>h){
			start =mid+1; // more banana need to be eat
		}else{
			ans =mid;
			end = mid -1; // finding for better results 
			
		}
	}
	return ans;
}

int main (){
	int arr []={3,6,11,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int h = 8;
	cout <<eat(arr,n,h)<<endl;
	return 0 ;
}
