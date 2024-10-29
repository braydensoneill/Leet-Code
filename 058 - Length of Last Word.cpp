class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() == 1)
            return 1;

        if (s.length() == 0)
            return 0;

        string lastWord = ""; 

        for (int i = s.length() - 1; i >= 0; i--) {
            if(s.at(i) != ' ')
                lastWord = lastWord + s.at(i);

            else if (lastWord.length() > 0 && s.at(i) == ' ')
                return lastWord.length();
        }

        return lastWord.length();
    }
};