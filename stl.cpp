#include<iostream>
#include<vector>
using namespace std ;

int main (){
	
	vector <int> v; // creation of vector 
	v.push_back(8);
	v.push_back(7);
	v.push_back(9);
	v.push_back(5);
	v.push_back(3);
	
	// deleting element 
	v.pop_back(); // 3 will poped 
	// v.clear (); for delete all element 
	  
	  // acess element 
	  cout<<v.front ()<<endl; // 8
	  // cout <<v.end()<<endl; 
	  
	  
	cout<<v.size()<<endl;
}
