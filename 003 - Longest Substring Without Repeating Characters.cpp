class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string currentString = "";
        string longestString = "";

        for (int i = 0; i < s.length(); i++) 
        {
            for(int j = i; j < s.length(); j++) 
            {
                if (currentString.contains(s.at(j))) 
                {
                    if (currentString.length() > longestString.length()) 
                        longestString = currentString;

                    currentString = "";

                    break;
                }

                currentString = currentString + s.at(j);
            }
        }

        if (s.length() == 1)
            return 1;

        if (longestString.length() > 0)
            return longestString.length();

        return 0;
    }
};
