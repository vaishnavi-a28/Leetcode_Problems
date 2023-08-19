class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=0;
        int best_sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(curr_sum<0)
                curr_sum=nums[i];
            else 
                curr_sum+=nums[i];
            best_sum=max(curr_sum,best_sum);
        }
        return best_sum;
    }
};