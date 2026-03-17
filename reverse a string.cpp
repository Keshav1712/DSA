#include<iostream>
#include<string>
using namespace std;
 
 int main (){
 	 string s = "keshav";
 	 int start = 0 ;
 	 int end = s.size()-1;
 	 while (start<end){
 	 	swap(s[start],s[end]);
 	 	start ++;
 	 	end--;
 	 	
	  }
 	cout<<s<<endl;
 		
 	return 0;
 }
