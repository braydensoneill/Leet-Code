class Solution {
public:
    string addBinary(string a, string b) {
        string output;
        bool carryNext = false;
        int locationTotal = 0;
        int lengthA = a.length();
        int lengthB = b.length();
        int stringSizeDifference = abs(lengthA - lengthB);

        if (lengthA > lengthB ) {
            b = addLeadingZeroes (b, stringSizeDifference);
        }

        else {
            a = addLeadingZeroes (a, stringSizeDifference);
        }

        for (int i = a.length() - 1; i >= 0; i--) {
            locationTotal = (a[i] - '0') + (b[i] - '0') + carryNext;

            if (locationTotal > 1) {
                carryNext = true;
                output = to_string(locationTotal % 2) + output;
            } 
            
            else {
                carryNext = false;
                output = to_string(locationTotal) + output;
            }
        }

        if (carryNext) {
            output = "1" + output;
        }

        return output;
    }

    string addLeadingZeroes(string s, int n) {
        for (int i = 0; i < n; i++) {
            s = "0" + s;
        }

        return s;
    }
};