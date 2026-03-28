#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*
time complexity - O(n)
s.c - O(n)


*/
string sortVowels(string s) {
    // 1. select the vowels 
    vector<int> upper(26, 0);
    vector<int> lower(26, 0);

    for (int i = 0; i < s.size(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i] = '#';
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i] = '#';
        }
    }

    // 2. sort the vowels 
    string vowel;

    for(int i = 0; i < 26; i++){
        char c = 'A' + i;
        while(upper[i]){
            vowel += c;
            upper[i]--;
        }
    }

    for(int i = 0; i < 26; i++){
        char c = 'a' + i;
        while(lower[i]){
            vowel += c;
            lower[i]--;
        }
    }

    // 3. insert at right place 
    int first = 0, second = 0;

    while(second < vowel.size()){
        if(s[first] == '#'){
            s[first] = vowel[second];
            second++;
        }
        first++;
    }

    return s;
}

int main(){
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    string result = sortVowels(s);

    cout << "Output: " << result << endl;

    return 0;
}
