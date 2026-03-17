#include<iostream>
#include<string>
using namespace std;

int main (){
	
	string s ;
	getline(cin,s);
	cout<<s<<endl;
	cout<<s.size()<<endl;
	
	
	
	string s1 ="keshav";
	string s2 = "kumar";
	string s3= s1.append(s2);
	cout<<s3<<endl;
//	char arr[6];
//	cin>>arr;
//	
//	cout<<arr;
	// Creating String 
//	string s = "Keshav";
//
//	string str2 = "Kuar ";
//	string result1 = s + str2;
//    cout << "Concatenation using + : " << result1 << endl;
//	cout << "Character at index 6: " << s.at(4) << endl;
//	cout << "Using index: ";
//    for (int i = 0; i < s.size(); i++) {
//        cout <<s[i]<<endl;
    
//     cout << "Using range-based for loop: ";
//    for (char ch :s) {
//        cout << ch ;
//    }
    return 0 ;
}
