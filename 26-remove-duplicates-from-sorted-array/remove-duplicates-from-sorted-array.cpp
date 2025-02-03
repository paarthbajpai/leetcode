class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> s;

        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }

        int index=0;
        int k=s.size();

        for(auto x:s)
        {
            nums[index]=x;
            index++;
        }

        return k;
    }
    

};