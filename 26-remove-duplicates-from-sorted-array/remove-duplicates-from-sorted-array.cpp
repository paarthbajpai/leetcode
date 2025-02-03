class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0,j=0;int n=nums.size();
        if(n==1) return 1;

        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }

        return i+1;
        
    }
};