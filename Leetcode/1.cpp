//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        
        int l = 0;
        int n = nums.size();
        int r = n-1;
        
        while(l < r){
            int s = nums[l] + nums[r];
            
            if(s == target)
                return {l,r};
            
            else if(s < target)
                l++;
            else
                r--;
            
        }
        
        return {};
    }
};
