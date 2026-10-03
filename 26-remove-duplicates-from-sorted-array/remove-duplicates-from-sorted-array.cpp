class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;
        set<int> st(nums.begin(),nums.end());

        for(auto it : st)
        {
            nums[i] = it;
            i++;
        }
        return i;
    }
};