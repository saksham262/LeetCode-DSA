class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> temp;

        set<int> st(nums1.begin(),nums1.end());
        set<int> mp(nums2.begin(),nums2.end());

        for(auto num : mp)
        {
            if(st.find(num) != st.end())
            {
                temp.push_back(num);
            }
        }

        return temp;
    }
};