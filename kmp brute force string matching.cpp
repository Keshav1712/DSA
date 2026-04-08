#include <iostream>
#include<string>
/*
String matching bruteforce approach 
time complexity =- O(mn)
s.c O(1)

*/
using namespace std;
int match(string s , string a){
    int n = s.size();
    int m = a .size();
    for(int i =0;i<=n-m;i++){
        int first =i;
        int second =0;
        while(second<m){
            if(s[first]!=a[second]){
               
                break;
            }
            else{
                first ++;
                second++;
            }
        }
        if(second==m){
            return first-second;
        }
    }
    return -1;
}

int main() {
   string hayback ="abaab";
   string needle = "aab";
   int n=match(hayback,needle);
   cout<<n;
   


}
