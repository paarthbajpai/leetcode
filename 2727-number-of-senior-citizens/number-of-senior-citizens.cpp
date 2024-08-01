class Solution {
public:
    int countSeniors(vector<string>& details) {

        vector<int> ans;
        for(int i=0;i<details.size();i++)
        {
            string s="";
            string res = details[i];
            s=res.substr(11,2);
            int q=stoi(s);
            ans.push_back(q);
            s="";
        }

        int count=0;

        for (auto& it : ans)
        {
            if(it>60) count++;
        }

        return count;

        


        
    }
};