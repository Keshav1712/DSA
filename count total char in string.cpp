#include<iostream>
#include<string>
using namespace std;

int main (){
    string s = "Keshav";
    
    int count = 0;
    
    while (s[count] != '\0') {
        count++;
    }
    
    cout << count;
}
