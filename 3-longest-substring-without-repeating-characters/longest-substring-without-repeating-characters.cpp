class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int res=0;
        int first=0,second=0;
        vector<bool> visited(256,false);
        while(second<s.size())
        {
            while(visited[s[second]]==true)
            {
                visited[s[first]]=false;
                first++;

            }

            visited[s[second]]=true;
            res=max(res,second-first+1);
            second++;
           

        }

         return res;
        
    }
};