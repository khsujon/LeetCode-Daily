//Day-6(06/12/2024)
//2554. Maximum Number of Integers to Choose From a Range I
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        unordered_set<int> bannedSet(banned.begin(), banned.end());

        int count = 0;
        for (int num = 1; num <= n; num++) {
            
            if (bannedSet.count(num)) continue;

            if (maxSum - num < 0) return count;

            maxSum -= num;
            count++;
        }
        return count;
    }
};