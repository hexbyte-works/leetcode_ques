class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int submission = nums.size()*(nums.size()+1)/2;
        int total=0;
        for(int i : nums){
            total+=i;
        }
        return submission-total;
    }
};