#include<iostream>
using namespace std;
// WAP to find Sqrt () of any given number Leetcode -69  
// time complexity - O(logn)

int msqrt(int x ){
	if(x<2){
		return x; // handle if x is 0 or 1 
	}
   int start =1; 
   int end = x/2; 
   int mid ;
   int ans =0;
   
   while (start<=end){
   	mid = start+(end-start)/2;
   	
   	if(mid ==x/mid){// mid * mid can create integer overflow 
   		ans = mid ;
   		break ;
   		// or we can use this also "return mid;"
	   }
	   else if(mid<x/mid){ 
	   	ans=mid;
	   	start =mid+1;
	   }
	   else{
	   	end=mid-1;
	   }
   }
   return ans;
   
}
int main (){
	int z = msqrt(49);
	cout<<z<<endl;
	return 0;
}
