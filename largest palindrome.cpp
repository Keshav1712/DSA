#include<iostream>
#include<vector>
#include<string>
using namespace std ;
/*
Leetcode - 409 largest palindrome 
1. store all the frequency with magic line "lower[s[i]-'a']"
2. check after iterating on it even or odd
3. if even then add else odd then minus one 
4. at last if any odd occur then add a odd in last 


*/
int main (){
	string s = "AaabbAd";
	
	// storing frequency 
	vector <int> lower(26,0);
        vector <int> upper(26,0);

        // storing frequency 
        for (int i =0;i<s.size();i++){
                // storing lowercase 
            if (s[i]>='a'){
                lower[s[i]-'a']++;

            }
            else{
                upper[s[i]-'A']++;
            }
        }

        int count = 0;
        bool odd =0;
        // check the value if even then add directly else minus 1 and add and one exra add for odd value 

        for(int i =0;i<26;i++){
            if(lower[i]%2==0){
                count +=lower[i];

            }
            else{
                count+=lower[i]-1;
                odd =1;
            }
            // for upper 
             if(upper[i]%2==0){
                count +=upper[i];

            }
            else{
                count+=upper[i]-1;
                odd =1;
            }
        }
        cout<<count+odd<<endl;
	
	
	
	
	return 0;
}
