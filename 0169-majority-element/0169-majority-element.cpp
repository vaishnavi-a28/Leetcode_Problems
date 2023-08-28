class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0];
        int cnt=1;
        int i=1;
        while(i<nums.size()){
            if(cnt==0){
                ans=nums[i];
            }
            if(nums[i]==ans)
                cnt++;
            else
                cnt--;
            i++;
        }
        if(cnt>0)
            return ans;
        else
            return -1;
    }
};