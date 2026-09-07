class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int maxi = -1;

        for(int i = n - 1; i >= 0; i--) {
            ans[i] = maxi;
            maxi = max(maxi, nums[i]);
        }

        return ans;
    }
};