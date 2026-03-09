#include<iostream>
#include<string>
using namespace std;

int main (){
	
	// Creating String 
	string s ;
	cin>>s;
	cout<<s;
//	cout << "Character at index 6: " << s.at(4) << endl;
	cout << "Using index: ";
    for (int i = 0; i < s.size(); i++) {
        cout <<s[i]<<endl;
    }
     cout << "Using range-based for loop: ";
    for (char ch :s) {
        cout << ch ;
    }
    cout << endl;
	return 0 ;
}
