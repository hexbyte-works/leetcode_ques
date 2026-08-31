class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int longest=1,curr_longest=1;
        for(int i =0;i<nums.size()-1;i++){
            if((nums[i+1]-nums[i])==1){
                curr_longest+=1;
            } else if ((nums[i]-nums[i+1])==0){
                continue;
            } else {
                longest=max(longest,curr_longest);
                curr_longest=1;
            }
        }
        longest=max(longest,curr_longest);
        return longest;
    }
};