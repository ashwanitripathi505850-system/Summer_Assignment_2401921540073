class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
           s.insert(nums[i]);
        for(int i=0;i<nums.size();i++){
            if(target-nums[i]==nums[i]) continue;
            else{
                if(st.find(sum-arr[i])!=st.end())
                   return 1;
            }
        }
    }
};
