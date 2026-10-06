class Solution {
public:
    bool check(vector<int>& nums) {
       int n = nums.size() ; 

       for(int i = 1 ; i < n ; i++){

        if(nums[i - 1] > nums[i]){
            i++; 

            while(i < n && nums[i  - 1] <= nums[i])
                i++ ; 

            if(i != n || nums[0] < nums[n - 1]) 
                return false ; 

        }
       } 

       return true ; 
    }
};