class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maxFreq = 0;
        int ans=-1;
        unordered_map<int,int> Freq;

        for(int i=0;i<n;i++)
        {
            Freq[nums[i]]++;
        }

        for(auto it : Freq)
        {
            if(it.second > maxFreq)
            {
                maxFreq=it.second;
                ans=it.first;
            }
        }

        return ans;
    }
};