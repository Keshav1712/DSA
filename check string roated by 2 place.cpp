#include<iostream>
#include<string>
using namespace std;
/* Check if string it is rotated by 2 place or not 
- check first clockwise 
- check then anti clockwise 
time complexity - O(n)



*/
void rotateclockwise(string &s){
    char c = s[s.size()-1];
    int index = s.size()-2;

    while (index >= 0){
        s[index+1] = s[index];
        index--;   // FIXED
    }

    s[0] = c;
}

void rotateanticlockwise(string &s){
    char c = s[0];
    int index = 1;

    while (index <= s.size()-1){
        s[index-1] = s[index];
        index++;
    }

    s[s.size()-1] = c;
}

int main(){
    string str1 = "leetcode";
    string str2 = "deleetco";

    string clockwise = str1;
    string anticlockwise = str1;

    // exactly 2 clockwise shifts
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if(clockwise == str2){
        cout << "Yes (clockwise)";
        return 0;
    }

    // exactly 2 anticlockwise shifts
    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if(anticlockwise == str2){
        cout << "Yes (anticlockwise)";
        return 0;
    }

    cout << "No";
    return 0;
}
