class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash;
        unordered_map<char,int> mash;

        for(int i=0;i<s.length();i++)
        hash[s[i]]++;

        for(int i=0;i<t.length();i++)
        mash[t[i]]++;

         return hash == mash;
        


        











        
    }
};