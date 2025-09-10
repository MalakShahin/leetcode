class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        
        std::unordered_map<char, int> charMap;
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];

           
            if (charMap.count(currentChar) && charMap[currentChar] >= left) {
                
                left = charMap[currentChar] + 1;
            }

            
            charMap[currentChar] = right;

            maxLength = std::max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};