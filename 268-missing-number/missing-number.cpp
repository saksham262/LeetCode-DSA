class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();

        // vector<int> hash(size of array, intialize value);
        vector<int> hash(n+2,0);

        // if n=5
        // then :
        // 0 1 2 3 4 5
        // 0 0 0 0 0 0

        for(int num : nums)
        {
            hash[num]++;
        }

        for(int i=0;i<=n;i++)
        {
            if(hash[i]==0)
            {
                return i;
            }
        }

        return 0;
    }
};