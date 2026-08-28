class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, dominating=nums[0];
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==dominating){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                dominating=nums[i+1];
            }
        }
        return dominating;
    }
};