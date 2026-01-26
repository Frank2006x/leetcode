// Last updated: 1/26/2026, 8:36:25 AM
class Solution {
public:
    bool check(vector<int> &nums, int l, int index, int df) {

         vector<int> temp = nums;
        int nonZero = 0;
        for (int x : temp) if (x != 0) nonZero++;

        while (index >= 0 && index < l) {
            if (nonZero == 0) return true;

            if (df == 1) index++;
            else index--;

            if (index < 0 || index >= l) break;

            if (temp[index] != 0) {
                temp[index]--;
                if (temp[index] == 0) nonZero--;
                df ^= 1;
            }
        }

        return nonZero == 0;
    }
    int countValidSelections(vector<int>& nums) {
        if (nums.size() == 1) {
            if (nums[0] == 0)
                return 2;
            return 0;
        }
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                if (check(nums, n, i, 1)) {
                    res++;
                }
                if (check(nums, n, i, 0)) {
                    res++;
                }
            }
        }
        return res;
    }
};