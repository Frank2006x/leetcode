// Last updated: 1/26/2026, 8:38:06 AM
class FindSumPairs {
public:
    vector<int> nums1;
    vector<int> nums2;
    unordered_map<int, int> mNums1;
    unordered_map<int, int> mNums2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for (int i = 0; i < nums1.size(); i++) {
            mNums1[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            mNums2[nums2[i]]++;
        }
    }

    void add(int index, int val) {
         mNums2[nums2[index]]--;
         nums2[index] += val;
         mNums2[nums2[index]]++;
         
          }

    int count(int tot) {
        int c = 0;

        for (auto i : mNums1) {
            int diff = tot - i.first;
            if (mNums2.find(diff) != mNums2.end()) {
                c += i.second * mNums2[diff];
            }
        }
        return c;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */