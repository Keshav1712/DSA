#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s = "me1 my2 see3";  // fixed duplicate index
    vector<string> ans(10);
    
    string temp;
    int count = 0, index = 0;

    while(index < s.size()){
        if (s[index] == ' '){
            int pos = temp[temp.size()-1] - '0';
            temp.pop_back();
            ans[pos - 1] = temp;   
            temp.clear();
            count++;
            index++;               
        }
        else{
            temp += s[index];
            index++;
        }
    }

   
    int pos = temp[temp.size()-1] - '0';
    temp.pop_back();
    ans[pos - 1] = temp;           
    temp.clear();
    count++;

    for (int i = 0; i < count; i++){  
        temp += ans[i];
        temp += ' ';
    }

    temp.pop_back();
    cout << temp << endl;

    return 0;
}
