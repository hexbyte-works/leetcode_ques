class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,total=0;
        unordered_map <int,int> mp;
        for(int i : nums){
            total+=i;
            if(total==k){
                count+=1;
            }
            if(mp.find(total-k)!=mp.end()){
                count+=mp[total-k];
            }
            mp[total]+=1;
        }
        return count;
    }
};