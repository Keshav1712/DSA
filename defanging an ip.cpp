#include<iostream>
#include<string>
/*
Defanging an ip - leetcode 1108 
time complexity - O(n)
space complexity -O(n)
*/
using namespace std;
int main (){
	string add = "1.1.1.1";
	int index =0;
	string ans;
	
	while(index<add.size()){
		if(add[index]=='.'){
			ans = ans+"[.]";
		}
		else{
			ans = ans +add[index];		}
			index++;
	}
	cout<<ans<<endl;
	
	return 0;
}
