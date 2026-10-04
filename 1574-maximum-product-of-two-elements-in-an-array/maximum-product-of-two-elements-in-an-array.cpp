class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int largest = 0;
        int secLargest = 0;

        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < n ; i++)
        {
            largest = nums[nums.size()-1];
            secLargest = nums[nums.size()-2];
        }

        return ((largest-1)*(secLargest-1));
    }
};