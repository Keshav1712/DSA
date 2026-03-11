#include<iostream>
#include<string>
using namespace std;

int main (){
	
	// Creating String 
	string s = "Keshav";

	string str2 = "Kumar\\\\";
	string result1 = s + str2;
    cout << "Concatenation using + : " << result1 << endl;
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
