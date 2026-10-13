class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> hash(nums.begin(),nums.end());

        if(nums.size() == hash.size())
        {
            return false;
        }

       
        return true;
    }
};