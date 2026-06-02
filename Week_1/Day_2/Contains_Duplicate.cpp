class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]]=1;
            }
            else{
                mp[nums[i]]++;
            }
        }

        bool check =false;

        for(auto i:mp){
            if(i.second >1) {
            check=true;
            break;
            }
        }

        return check;

        
    }
};
