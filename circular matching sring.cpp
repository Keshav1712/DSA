#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
Circular matching string 
1.copy same string like a +a fromstring a and b  
2. then find lps of second string "b"
3. then string matching pattern 
*/


int lpsf (vector<int> &lps , string c){
	int pre=0;
	int suff=1;
	int n = c.size();
	
	while (suff<n){
		// matched 
		if(c[pre]==c[suff]){
			lps[suff]=pre+1;
			pre++;
			suff++;
		}
		// not matched 
		else{
			if(pre==0){
			lps[suff]=0;
				suff++;
			}
			else{
				pre=lps[pre-1];
			}
		}
		
	}
	return lps[n-1];
}
// string matching 
bool match (string text,string ab){
    int size = ab.size();
    vector<int> lps(size,0);
    lpsf(lps,ab);

    int first=0; 
    int second=0; 

    while (first < text.size()){
    	// match 
        if(ab[second] == text[first]){
            first++;
            second++;
        }
        // not match 
        else{
            if(second == 0){
                first++;
            }
            else{
                second = lps[second-1];
            }
        }
        
		
		
        if(second == ab.size()){
            break;  // stop when match found
        }
    }

    return (second == ab.size()); // correct final check
}
int main(){
	string a = "abcde";
	string b = "abc";
	string com =a+a;

	
	int ac= match(com,b);
	cout<<ac;

	
	
	
	return 0;
}
