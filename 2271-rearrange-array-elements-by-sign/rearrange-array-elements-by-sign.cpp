class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans1;
        vector<int> ans2;
        vector<int> ans3;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) ans1.push_back(nums[i]);
        }

        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]<0) ans2.push_back(nums[j]);
        }

        int i=0,j=0;
        for(int i = 0; i < ans1.size(); i++) {
        ans3.push_back(ans1[i]);
        ans3.push_back(ans2[i]);
    }


        return ans3;
        
    }
};