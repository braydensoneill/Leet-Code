class Solution {
public:
    int arrangeCoins(int n) {
        if (n == 0)
            return 0;

        int lastFullStepCount = 0;
        long long currentCoins = 0;

        for (int i = 1; i <= n; i++) {
            currentCoins += i;

            if (currentCoins > n) {
                break;
            }

            lastFullStepCount = i;
        }

        return lastFullStepCount;
    }
};