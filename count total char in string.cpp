#include<iostream>
#include<string>
using namespace std;

int main (){
    string s = "hello ";
    
    int count = 0;
    
    while (s[count] != '\0') {
        count++;
    }
    
    cout << count;
}
