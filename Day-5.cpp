//Day-5(05/12/2024)
//2337. Move Pieces to Obtain a String
class Solution {
public:
    bool canChange(string start, string target) {
        int i = 0, j = 0; 
        while (i < start.size() || j < target.size()) {
            // Skip '_' characters in start and target
            while (i < start.size() && start[i] == '_') i++;
            while (j < target.size() && target[j] == '_') j++;

            // If both reach the end, the strings match
            if (i == start.size() && j == target.size()) return true;

            // If one reaches the end but the other does not, strings cannot match
            if (i == start.size() || j == target.size()) return false;

            // Mismatched characters
            if (start[i] != target[j]) return false;

            // 'L' must move left, so i >= j
            // 'R' must move right, so i <= j
            if ((start[i] == 'L' && i < j) || (start[i] == 'R' && i > j)) return false;
            i++;
            j++;
        }
        return true;
    }
};


