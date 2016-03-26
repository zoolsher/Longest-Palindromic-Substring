#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int i, j, max,c;
        int n = s.length();
        if (n < 1)
            return "";
        max = 0;
        int start;
        
        for (i = 0; i < n; ++i) { // i is the middle point of the palindrome  
            for (j = 0; (i - j >= 0) && (i + j < n); ++j){ // if the length of the palindrome is odd  
                if (s[i - j] != s[i + j])
                    break;
                c = j * 2 + 1;
                
            }
            if (c > max){
                max = c;
                start = i-j+1;
            }
            for (j = 0; (i - j >= 0) && (i + j + 1 < n); ++j){ // for the even case  
                if (s[i - j] != s[i + j + 1])
                    break;
                c = j * 2 + 2;
            }
            if (c > max){
                max = c;
                start = i-j+1;
            }
        }
        string res(s,start,max);
        return res;
    }
};
