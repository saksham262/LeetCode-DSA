class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int count=-1;

        for(int num : nums)
        {
            count++;
            if(num >= target)
            {
                return count;
            }
        }

        return n;
    }
};