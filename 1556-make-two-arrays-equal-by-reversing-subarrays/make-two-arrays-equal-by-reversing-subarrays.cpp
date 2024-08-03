class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int  freq[1001]={0};
        for(int num: target) freq[num]++;

        for(int num: arr) {freq[num]--; if(freq[num]<0) return false;}
        return true; 
        
    }
};