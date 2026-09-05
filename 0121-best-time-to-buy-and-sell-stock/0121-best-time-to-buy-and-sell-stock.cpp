class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int maxprofit=0;
        int mini=nums[0];

        for(int i=0;i<n;i++){
            int cost=nums[i]-mini;
            maxprofit=max(maxprofit,cost);
            mini=min(mini,nums[i]);
        }
        return maxprofit;
    }
};