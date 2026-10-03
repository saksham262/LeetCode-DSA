class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;

        for(int num : nums)
        {
            if(num!=0)
            {
                temp.push_back(num);
            }
        }
        while(temp.size()<n)
        {
            temp.push_back(0);
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=temp[i];
        }
    }
};