class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int res=0;
        int n=s.size();

        //string is null
        if(n==0) return 0;

        for(int i=0;i<n;i++)
        {
            vector<bool> visited(256,false);
            for(int j=i;j<n;j++)
            {
                if(visited[s[j]]==true) break;
                else
                {
                    res=max(res,j-i+1);
                    visited[s[j]]=true;
                }
            }
        }

        return res;
        
    }
};