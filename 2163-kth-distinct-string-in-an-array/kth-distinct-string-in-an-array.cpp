class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      
      unordered_map<string, int> strFreqMp;int count=0;
       for(auto &str : arr)strFreqMp[str]++; 
       for(auto &str : arr){
        if(strFreqMp[str] == 1)
        count++;
        if(count==k)return str;
       }
       return "";






        
    }
};