#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isvowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }    

    int maxVowels(string s, int k) {
        int count = 0;
        
        for(int i = 0; i < k; i++) {
            if(isvowel(s[i])) {
                count++;
            }
        } 
        
        int max_count = count; 
        
        for (int i = k; i < s.size(); i++) {
            if(isvowel(s[i])) {
                count++;
            }
            
            if(isvowel(s[i - k])) {
                count--;
            }
                            
            max_count = std::max(max_count, count);
            
            if (max_count == k) {
                return k;
            }
        }
        return max_count;
    }
};
