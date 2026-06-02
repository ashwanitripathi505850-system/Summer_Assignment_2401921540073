class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double wid_sum=0;
        for(int i=0;i<k;i++) wid_sum+=nums[i];
        double max_sum=wid_sum;
        for(int i=k;i<n;i++){
            wid_sum+=nums[i];
            wid_sum-=nums[i-k];
            max_sum = max(wid_sum,max_sum);

           
        }
        return (double)max_sum/k;
        
    }
};
