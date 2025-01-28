class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {


        if(s1==s2) return true;

        vector<int> mismatch;

        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            mismatch.push_back(i);
        }

        if(mismatch.size()!=2) return false;

        int i=s1[0],j=s2[0];

         int a = mismatch[0], p = mismatch[1];
    return (s1[a] == s2[p] && s1[p] == s2[a]);
        
    }
};